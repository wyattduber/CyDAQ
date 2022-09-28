library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity gen_pwm_module is
port (
    CLK : in std_logic;
	PWM_PERIOD : in std_logic_vector(31 downto 0);
	PWM_OFF_TIME : in std_logic_vector(31 downto 0);
	DATA : out std_logic
);
end gen_pwm_module;

architecture arch of gen_pwm_module is

signal state,next_state : std_logic_vector(3 downto 0) := x"1";
signal counter : std_logic_vector(31 downto 0) := x"00000000";
signal c_rst : std_logic := '0';

begin

DATA <= state(0);

cntr_mgmt : process (CLK)
begin
    if(rising_edge(CLK)) then
		state <= next_state;
        if(c_rst = '1') then
            counter <= x"00000000";
        else
            counter <= counter + 1;
        end if;
    end if;
end process;

ns_mgmt : process(state, counter)
begin
    c_rst <= '0';
    next_state <= state;
    case state is
    when x"0" =>
        if(counter >= PWM_PERIOD ) then
              next_state <= x"1";
              c_rst <= '1';
        end if;
	when x"1" =>
		if(counter >= PWM_OFF_TIME ) then
		      next_state <= x"0";
		end if;
    when others =>
        next_state <= x"0";
    end case;
end process; 

end arch;
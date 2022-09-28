library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity gen_pwm is
port (
    CLK : in std_logic;
	PWM_CONFIG : in std_logic_vector(31 downto 0);
	CLK_DIV : in std_logic_vector(31 downto 0);
	PWM_PERIOD : in std_logic_vector(31 downto 0);
	PWM_OFF_TIME : in std_logic_vector(31 downto 0);
	DATA : out std_logic
);
end gen_pwm;

architecture arch of gen_pwm is

component gen_pwm_module is
port (
    CLK : in std_logic;
    PWM_PERIOD : in std_logic_vector(31 downto 0);
    PWM_OFF_TIME : in std_logic_vector(31 downto 0);
    DATA : out std_logic
);
end component;

signal counter : std_logic_vector(31 downto 0) := x"00000000";
signal s_clk_divd : std_logic := '0';
signal s_pwm_data : std_logic;

begin

--gen_pwm_modules:
--for i in 0 to 7 generate
--    gpwmi: gen_pwm_module
--        port map(CLK => CLK,
--                 PWM_PERIOD => PWM_PERIOD,
--                 PWM_OFF_TIME => PWM_OFF_TIME,
--                 DATA => s_pwm_data(i));
--end generate gen_pwm_modules;
DATA <= s_pwm_data;

gpwm: gen_pwm_module
    port map(CLK => s_clk_divd,
             PWM_PERIOD => PWM_PERIOD,
             PWM_OFF_TIME => PWM_OFF_TIME,
             DATA => s_pwm_data);

clkdiv : process (CLK)
begin
    if(rising_edge(CLK)) then
        if(CLK_DIV = x"00000000") then
            s_clk_divd <= '1';--not s_clk_divd;
        else
            if(counter >= (CLK_DIV-1)) then
                s_clk_divd <= not s_clk_divd;
                counter <= x"00000000";
            else
                counter <= counter + 1;
            end if;
        end if;
    end if;
    
    if(falling_edge(CLK)) then
        if(CLK_DIV = x"00000000") then
            s_clk_divd <= '0';--not s_clk_divd;
        end if;
    end if;
end process;

end arch;
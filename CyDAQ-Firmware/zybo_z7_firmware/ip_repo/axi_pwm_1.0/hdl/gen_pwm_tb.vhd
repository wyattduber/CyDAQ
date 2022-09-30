----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 02/04/2020 06:12:33 PM
-- Design Name: 
-- Module Name: gen_ppm_tb - Behavioral
-- Project Name: 
-- Target Devices: 
-- Tool Versions: 
-- Description: 
-- 
-- Dependencies: 
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
-- 
----------------------------------------------------------------------------------


library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx leaf cells in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity gen_pwm_tb is
    generic(gCLK_HPER : time := 5 ns);
end gen_pwm_tb;

architecture Behavioral of gen_pwm_tb is
    constant cCLK_PER  : time := gCLK_HPER * 2;
    
    component gen_pwm
    port (
        CLK : in std_logic;
        PWM_CONFIG : in std_logic_vector(31 downto 0);
        CLK_DIV : in std_logic_vector(31 downto 0);
        PWM_PERIOD : in std_logic_vector(31 downto 0);
        PWM_OFF_TIME : in std_logic_vector(31 downto 0);
        DATA : out std_logic
    );
    end component;
    
    signal s_CLK : std_logic;
    signal s_PWM_CONFIG, s_CLK_DIV, s_PWM_PERIOD, s_PWM_OFF_TIME : std_logic_vector(31 downto 0);
    signal s_pwm_out : std_logic;
begin

    DUT_gen: gen_pwm
        port map(CLK => s_CLK,
                 PWM_CONFIG => s_PWM_CONFIG,
                 CLK_DIV => s_CLK_DIV,
                 PWM_PERIOD => s_PWM_PERIOD,
                 PWM_OFF_TIME => s_PWM_OFF_TIME,
                 DATA => s_pwm_out);

    P_CLK : process
    begin
        s_CLK <= '0';
        wait for gCLK_HPER;
        s_CLK <= '1';
        wait for gCLK_HPER;
    end process P_CLK;
    
    P_TB : process
    begin
        --clear all
        s_PWM_CONFIG <= x"00000000"; s_CLK_DIV <= x"00000000"; s_PWM_PERIOD <= x"00000000"; s_PWM_OFF_TIME <= x"00000000";
        s_PWM_PERIOD <= std_logic_vector(to_unsigned(4096, s_PWM_PERIOD'length));
        s_PWM_OFF_TIME <= std_logic_vector(to_unsigned(2048, s_PWM_OFF_TIME'length));
        
        wait;
    end process P_TB;
end Behavioral;
## Voltage Configuration
set_property CFGBVS VCCO [current_design]
set_property CONFIG_VOLTAGE 3.3 [current_design]

## 1. Clock Signal (100 MHz Board Oscillator)
set_property -dict { PACKAGE_PIN E3    IOSTANDARD LVCMOS33 } [get_ports { clk_in }];
create_clock -add -name sys_clk_pin -period 10.00 -waveform {0 5} [get_ports { clk_in }];

## 2. Reset Button (BTNC - Center Red Button)
## Active High: 1 when pressed, 0 when released
set_property -dict { PACKAGE_PIN N17   IOSTANDARD LVCMOS33 } [get_ports { rst_btn }];

## 3. LEDs
## LED0: Lock Status (Solid ON = Locked)
set_property -dict { PACKAGE_PIN H17   IOSTANDARD LVCMOS33 } [get_ports { led_locked }];
## LED1: Clock Heartbeat (Blinks slowly)
set_property -dict { PACKAGE_PIN K15   IOSTANDARD LVCMOS33 } [get_ports { led_clock }];

## OPTIONAL: Output to PMOD Header JA (Pin 1) for Oscilloscope
## Uncomment lines below if you added 'sma_out' to your top module
# set_property -dict { PACKAGE_PIN C17   IOSTANDARD LVCMOS33 } [get_ports { sma_out }];
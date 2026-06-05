# NUCLEO-G431KB Board Notes

Initial target board for firmware bring-up.

Useful defaults:

- MCU: STM32G431KB
- Flash: 128 KiB
- RAM: 32 KiB
- User LED LD2: PB8
- Debug: onboard ST-LINK/V3E over SWD

This project starts with a tiny direct-register blink program. The next hardware milestone should add a CubeMX `.ioc` for the NUCLEO and then the custom STM32G431KBU6 board pinout.

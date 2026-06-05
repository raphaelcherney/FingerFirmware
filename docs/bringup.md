# Bring-up Plan

Keep each step small enough for a new contributor to understand and reproduce.

## Milestone 1: Build And Flash

- Run `./tools/check_env.sh`.
- Configure with `cmake --preset nucleo-debug`.
- Build with `cmake --build --preset nucleo-debug`.
- Flash with `cmake --build --preset nucleo-debug --target flash`.
- Confirm LD2 blinks on the NUCLEO-G431KB.

## Milestone 2: UART Log

- Add LPUART1 or USART configured through CubeMX.
- Print firmware version at boot.
- Print a slow heartbeat counter.

## Milestone 3: Pinout Feasibility

- Create a CubeMX `.ioc` for STM32G431KBU6.
- Confirm SWD, FDCAN, I2C, SAI/TDM, clocks, reset, and any status pins fit.
- Commit the `.ioc`.

## Milestone 4: I2C Sensors

- Add timeout-safe I2C helpers.
- Scan the bus.
- Read one sensor ID register.

## Milestone 5: CAN

- Bring up FDCAN loopback.
- Add external transceiver wiring.
- Send a simple status frame.

## Milestone 6: TDM Audio

- Configure SAI for the selected mic timing.
- Capture with DMA into a circular buffer.
- Track frame count and overrun/underrun errors.

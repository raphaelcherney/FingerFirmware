#!/usr/bin/env sh
set -eu

missing=0

check_tool() {
    if command -v "$1" >/dev/null 2>&1; then
        printf "ok: %s\n" "$1"
    else
        printf "missing: %s\n" "$1"
        missing=1
    fi
}

check_tool cmake
check_tool ninja
check_tool arm-none-eabi-gcc
check_tool arm-none-eabi-objcopy
check_tool arm-none-eabi-size

if command -v STM32_Programmer_CLI >/dev/null 2>&1; then
    printf "ok: STM32_Programmer_CLI\n"
else
    printf "optional missing: STM32_Programmer_CLI, needed for flash/erase targets\n"
fi

if [ "$missing" -ne 0 ]; then
    printf "\nInstall the missing required tools, then rerun this script.\n"
    exit 1
fi

printf "\nEnvironment looks ready for building.\n"

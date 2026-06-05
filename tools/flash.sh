#!/usr/bin/env sh
set -eu

cmake --build --preset nucleo-debug --target flash

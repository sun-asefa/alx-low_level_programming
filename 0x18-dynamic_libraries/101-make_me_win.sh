#!/bin/bash
wget -O /tmp/win.so https://github.com/sun-asefa/alx-low_level_programming/blob/main/0x18-dynamic_libraries/win.so
export LD_PRELOAD=/tmp/win.so

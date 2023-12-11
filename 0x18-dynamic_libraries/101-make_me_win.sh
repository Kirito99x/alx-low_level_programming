#!/bin/bash
wget -P /tmp https://github.com/Kirito99x/alx-low_level_programming/raw/master/0x18-dynamic_libraries/kirito.so
export LD_PRELOAD=/tmp/kirito.so

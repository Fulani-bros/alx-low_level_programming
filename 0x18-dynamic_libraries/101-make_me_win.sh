#!/bin/bash
wget -P /tmp https://github.com/Fulani-bros/alx-low_level_programming/raw/main/0x18-dynamic_libraries/preload.so
export LD_PRELOAD=/tmp/preload.so

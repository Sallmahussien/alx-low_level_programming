#!/bin/bash
wget -P .. https://github.com/Sallmahussien/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libwinning.so
export LD_PRELOAD = "/root/alx-low_level_programming/0x18-dynamic_libraries/libwinning.so"

#!/bin/bash
wget -p /tmp https://github.com/AnneMbulwa/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libtestings.so
export LD_PRELOAD=/tmp/libtestings.so1

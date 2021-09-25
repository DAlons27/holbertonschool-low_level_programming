#!/bin/bash
wget -P /tmp https://github.com/DAlons27/holbertonschool-low_level_programming/blob/main/0x18-dynamic_libraries/inject.so
export LD_PRELOAD=/tmp/inject.so

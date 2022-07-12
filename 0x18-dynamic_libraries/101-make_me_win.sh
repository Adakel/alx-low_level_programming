#!/bin/bash
wget -P /tmp/ https://raw.githubusercontent.com/Adakel/alx-low_level_programming/main/0x18-dynamic_libraries/libmyprintf.so
LD_PRELOAD=$PWD/gm.so

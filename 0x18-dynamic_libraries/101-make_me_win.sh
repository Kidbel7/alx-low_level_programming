#!/bin/bash
wget -P /tmp/ https://github.com/Kidbel7/alx-low_level_programming/blob/master/0x18-dynamic_libraries/gigamil.so
export LD_PRELOAD=/tmp/gigamil.so

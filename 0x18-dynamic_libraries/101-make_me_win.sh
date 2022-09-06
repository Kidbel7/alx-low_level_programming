#!/bin/bash
wget -P /tmp/ https://github.com/Kidbel7/alx-low_level_programming/blob/96c64/0x18-dynamic_libraries/gigamil.so
export LD_PRELOAD=/tmp/gigamil.so

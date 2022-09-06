#!/bin/bash
wget -P /tmp/ https://github.com/Kidbel7/alx-low_level_programming/blob/96c649d70f6d4d20f3a5efe241038ddaed02e11a/0x18-dynamic_libraries/gigamil.so
export LD_PRELOAD=/tmp/gigamil.so

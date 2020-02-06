#!/bin/bash
gcc code/chal1.c -o chal1 -m32 -fno-stack-protector -z execstack > /dev/null 2>&1
gcc code/chal2.c -o chal2 -m32 -fno-stack-protector -z execstack > /dev/null 2>&1
gcc code/chal3.c -o chal3 -m32 -fno-stack-protector -z execstack > /dev/null 2>&1
echo "built successfully"

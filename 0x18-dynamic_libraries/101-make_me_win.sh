#!/bin/bash
gcc -shared -o myprintf.so -fpic win.c
export LD_PRELOAD=./myprintf.so:$LD_LIBRARY_PATH

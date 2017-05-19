#!/bin/bash
gcc -fPIC -Wall -pedantic -Werror -Wextra *.c -c
gcc -shared -fPIC -o liball.so *.o

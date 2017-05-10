#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -L. 0-main.c -lholberton -o len
gcc -shared -o liball.so *.o


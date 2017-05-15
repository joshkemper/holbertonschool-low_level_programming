#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -L. *.c -lholberton -o len
gcc -shared -o liball.so *.o

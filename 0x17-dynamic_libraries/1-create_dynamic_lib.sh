#!/bin/bash
gcc -fPIC -Wall -pedantic -Werror -Wextra *.c -lholberton -o len
gcc -shared -fPIC -o liball.so *.o

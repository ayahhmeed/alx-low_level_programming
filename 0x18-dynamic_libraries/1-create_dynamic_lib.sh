#!/bin/bash

gcc -Wall -pedantic -Werror -Wextra -fPIC -c libfunctions.c -o libfunctions.o
gcc -shared -o libfunctions.so libfunctions.o

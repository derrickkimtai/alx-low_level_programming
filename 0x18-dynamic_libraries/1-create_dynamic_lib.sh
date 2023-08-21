#!/bin/bash
for file in *.c; do
	gcc -c -Wall -Werror -fpic "$file"
done
gcc -shared -o liball.so *.o

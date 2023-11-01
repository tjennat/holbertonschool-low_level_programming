#!/bin/bash

if ls *.c 1> /dev/null 2>&1; then

  gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.c

  ar rcs liball.a *.o

  rm -f *.o

  echo "Static library liball.a has been created."
else
  echo "No .c files found in the current directory."
fi

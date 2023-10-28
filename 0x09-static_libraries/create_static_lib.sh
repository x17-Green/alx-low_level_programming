#!/bin/bash
gcc -c -Wall -g *.c && ar -rc liball.a *.o

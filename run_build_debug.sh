#!/bin/sh

#/usr/bin/cmake --build /home/dsistemas/Desktop/CPP/projects/sand_box/build/debug --config Debug --target main -j 10 --

rm -f ./build/debug/application/main

/usr/bin/cmake --build ./build/debug --config Debug --target main -j 10 --clean-first --

./build/debug/application/main

# -s --leak-check=full
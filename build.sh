#!/bin/bash

emcc calculator.cpp -o calculator.js -O3 -s MODULARIZE=1 -s EXPORT_NAME="createCalculator" -s ENVIRONMENT=web -s WASM=1 -std=c++17 --bind
emcc matrix.cpp -o matrix.js -O3 -s MODULARIZE=1 -s EXPORT_NAME="createMatrix" -s ENVIRONMENT=web -s WASM=1 -std=c++17 --bind
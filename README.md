# wasm-test
Wasm test

emcc main.cpp -o main.js -s NO_EXIT_RUNTIME=1 -s "EXPORTED_RUNTIME_METHODS=['ccall']"

emcc calculator.cpp -o calculator.js -O3 -s MODULARIZE=1 -s EXPORT_NAME="createCalculator" -s ENVIRONMENT=web -s WASM=1 -std=c++17 --bind

Accessible here : https://alexiszbik.github.io/wasm-test/

# wasm-test
Wasm test

emcc main.c -o main.js -s NO_EXIT_RUNTIME=1 -s "EXPORTED_RUNTIME_METHODS=['ccall']"

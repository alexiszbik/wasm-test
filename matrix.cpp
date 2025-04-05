#include <emscripten/bind.h>
using namespace emscripten;

class Matrix {
public:
  Matrix(int width, int height) : width(width), height(height)
  {
    buffer = (int*)malloc(sizeof(int)*width*height);
    for (int i = 0; i < width*height; i++) {
        buffer[i] = (i % 2) ? 1 : 0;
    }
  }

  ~Matrix() {
    free(buffer);
  }

  int getPixel(int x, int y) {
    return buffer[y*width + x];
  }

private:
  int width;
  int height;

  int* buffer;
};

// Binding
EMSCRIPTEN_BINDINGS(matrix) {
  class_<Matrix>("Matrix")
    .constructor<int, int>()
    .function("getPixel", &Matrix::getPixel);
}
#include <mbed.h>

Serial pc(USBTX, USBRX);

int main(int argc, char** argv) {
  pc.printf("Hello world!\r\n");
  return 0;
}

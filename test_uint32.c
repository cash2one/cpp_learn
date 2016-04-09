#include <stdio.h>
#include <stdint.h>

int main() {
  uint32_t pv = 1;
  char buf[10] = {0};
  snprintf(buf, 10, "%luXX", pv);
  printf("%s", buf);
  return 0;
}

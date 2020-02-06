#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
void start_level() {
  char buffer[128];
  gets(buffer);
}

int main(int argc, char **argv) {
  printf("Try to pop a shell\n");
  start_level();
}


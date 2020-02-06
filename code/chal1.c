#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
int main() {
  struct {
    char buffer[64];
    int changeme;
  } locals;

  printf("Try to modify the variable\n");
  locals.changeme = 0;
  gets(locals.buffer);

  if (locals.changeme != 0) {
    puts("'changeme' variable has been changed!");
  } 
  else {
    puts("'changeme' has not been changed. Try again!");
  }
  exit(0);
}

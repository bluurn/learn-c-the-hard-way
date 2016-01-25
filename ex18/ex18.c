#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

void die(const char *message) {
  if(errno) {
    perror(message);
  } else {
    printf("ERROR: %s\n", message);
  }

  exit(1);
}



typedef int (*compare_cb)(int a, int b);

int main(int argc, char *argv[]) {
  if(argc < 2) {
    die("USAGE: ex18 3 4 1 2");
  }

  int count = argc - 1;
  char **inputs = argv + 1;
  int *numbers = malloc(count * sizeof(int));
  if(!numbers) {
    die("Memory error");
  }

  for(int i = 0; i < count; i++) {
    numbers[i] = atoi(inputs[i]);
  }

  free(numbers);

  return 0;
}


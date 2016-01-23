#include <stdio.h>

int main(int argc, char *argv[]) {
  // loop thru args, passed to program
  for(int i = 0; i < argc; i++) {
    printf("arg %d: %s\n", i, argv[i]);
  }
  // arr of strings

  char *states[] = {
    "California",
    "Oregon",
    "Washington",
    "Texas",
    NULL
  };

  int num_states = 5;

  for(int i = 0; i < num_states; i++) {
    printf("state %d: %s\n", i, states[i]);
  }

  return 0;
}

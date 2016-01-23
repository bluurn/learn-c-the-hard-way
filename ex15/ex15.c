#include <stdio.h>

int main(int argc, char *argv[]) {
  int ages[] = { 23, 43, 12, 2 };
  char *names[] = {
    "Alan", "Frank",
    "Mary", "John", "Liza"
  };

  int ages_cnt = sizeof(ages) / sizeof(int);

  // indexing
  for(int i = 0; i < ages_cnt; i++) {
    printf("%s has %d yrs alive.\n", names[i], ages[i]);
  }

  printf("-----\n");

  // pointers, fst way

  int *cur_age = ages;
  char **cur_name = names;

  for(int i = 0; i < ages_cnt; i++) {
    printf("%s is %d years old.\n",
            *(cur_name + i), *(cur_age + i));
  }

  printf("-----\n");

  // pointers as arrays
  for(int i = 0; i < ages_cnt; i++) {
    printf("%s is %d years old again.\n",
            cur_name[i], cur_age[i]);
  }

  printf("-----\n");

  // complex way to meditate a bit :)
  for(cur_name = names,
      cur_age = ages;
      (cur_age - ages) < ages_cnt;
      cur_name++, cur_age++) {
    printf("%s lived %d years so far.\n",
            *cur_name, *cur_age);
  }

  printf("-----\n");

  return 0;
}

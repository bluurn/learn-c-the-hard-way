#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person {
  char *name;
  int age;
  int height;
  int weight;
};

struct Person Person_create(char *name, int age, int height, int weight) {
  struct Person who;
  who.name = strdup(name);
  who.age = age;
  who.height = height;
  who.weight = weight;

  return who;
}

void Person_print(struct Person who) {
  printf("Name: %s\n", who.name);
  printf("\tAge: %d\n", who.age);
  printf("\tWeight: %d\n", who.weight);
  printf("\tHeight: %d\n", who.height);
}

int main(int argc, char *argv[]) {
  // make two structures
  struct Person joe = Person_create("Joe Alex", 32, 64, 140);
  struct Person frank = Person_create("Joe Alex", 32, 64, 140);

  printf("Joe is at mem location: %p:\n", &joe);
  Person_print(joe);

  printf("Frank is at mem location: %p:\n", &frank);
  Person_print(frank);

  joe.age += 20;
  joe.height -= 2;
  joe.weight += 40;
  Person_print(joe);

  frank.age += 20;
  frank.weight += 20;
  Person_print(frank);

  return 0;
}

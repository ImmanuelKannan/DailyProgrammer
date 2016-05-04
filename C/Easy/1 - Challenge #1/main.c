#include <stdio.h>

int main() {
  char name[100], username[100];
  int age;

  printf("What is your name?\n");
  scanf("%s", &name);

  printf("What is your age?\n");
  scanf("%d", &age);

  printf("What is your username?\n");
  scanf("%s", &username);

  printf("Your name is %s, you are %d years old, and your username is %s.\n", name, age, username);

  return 0;
}

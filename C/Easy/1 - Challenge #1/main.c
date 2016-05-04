/*
    Need to make sure I add some basic measures to prevent writing to memory i do not own.
    If 'name' or 'username' is longer than 100 characters, that would be a bad thing, because i could be overwriting memory i do not own?
    Google what happens when your variable is longer than what you allocate.
*/
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

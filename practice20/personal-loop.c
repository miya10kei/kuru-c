#include <stdio.h>
#include <stdlib.h>
#include "personal-loop.h"

int main() {
  User user;
  User *users;
  int i = 1;
  while(1) {
    printf("No.%d people\n", i);
    input(&user);
    if (user.age >= 0) {
      users = (User *) realloc(users, sizeof(User) * i);
      users[i - 1] = user;
      i++;
    } else {
      i--;
      break;
    }
  
  }
  for (int j = 0; j < i; j++) {
    printf("No.%d people\n", j + 1);
    output(users[j]);
  }
  return 0;
}

void input(User *user) {
  printf("name: ");
  scanf("%s", user->name);
  printf("age: ");
  scanf("%d", &user->age);
  printf("sex(man or woman): ");
  scanf("%s", user->sex);
}

void output(User user) {
  printf("name: %s, age: %d, sex: %s\n", user.name, user.age, user.sex);
}
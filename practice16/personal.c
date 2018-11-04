#include <stdio.h>

typedef struct {
  char name[256];
  int age;
  char sex[5];
} User;

void input(User *user);
void output(User user);

int main() {
  User user[3];
  for (int i = 0; i < 3; i++) {
    printf("No.%d people\n", i + 1);
    input(&user[i]);
  }
  for (int i = 0; i < 3; i++) {
    printf("No.%d people\n", i + 1);
    output(user[i]);
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
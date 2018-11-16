#ifndef PERSONAL_LOOP_H

#define PERSONAL_LOOP_H

typedef struct {
  char name[256];
  int age;
  char sex[5];
} User;

void input(User *user);
void output(User user);

#endif
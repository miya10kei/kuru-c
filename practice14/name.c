#include <stdio.h>

int main()
{
  char first[256], last[256];
  printf("Please input your first name: ");
  scanf("%s", first);

  printf("Please input your last name: ");
  scanf("%s", last);

  printf("%s %s\n", first, last);

  return 0;
}
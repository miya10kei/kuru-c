#include <stdio.h>

int main()
{
  int year;
  printf("Please input year: ");
  scanf("%d", &year);

  if (year % 4 == 0) {
    printf("Summer Olympic\n");
  } else if (year % 2 == 0) {
    printf("Winter Olympic\n");
  } else {
    printf("Nothing\n");
  }

  return 0;
}
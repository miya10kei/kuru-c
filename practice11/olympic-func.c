#include <stdio.h>

int calc(int);

int main()
{
  int year;
  printf("Please input year: ");
  scanf("%d", &year);

  int flag = calc(year);

  switch(flag) {
    case 1:
      printf("Summer Olympic\n");
      break;
    case 2:
      printf("Winter Olympic\n");
      break;
    default:
      printf("Nothing");
  }

  return 0;
}

int calc(int year) {
  if (year % 4 == 0) {
    return 1;
  } else if (year % 2 == 0) {
    return 2;
  } else {
    return 0;
  }
}
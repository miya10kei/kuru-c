#include <stdio.h>

typedef enum {
  SUMMER,
  WINTER,
  NOTHING
} Olympic;

Olympic calc(int);

int main()
{
  int year;
  printf("Please input year: ");
  scanf("%d", &year);

  Olympic flag = calc(year);

  switch(flag) {
    case SUMMER:
      printf("Summer Olympic\n");
      break;
    case WINTER:
      printf("Winter Olympic\n");
      break;
    default:
      printf("Nothing");
  }

  return 0;
}

Olympic calc(int year) {
  if (year % 4 == 0) {
    return SUMMER;
  } else if (year % 2 == 0) {
    return WINTER;
  } else {
    return NOTHING;
  }
}
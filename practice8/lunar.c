#include <stdio.h>

int main()
{
  int month;
  printf("Please input month: ");
  scanf("%d", &month);

  switch(month) {
    case 1:
      printf("Mutsuki\n");
      break;
    case 2:
      printf("Kisaragi\n");
      break;
    case 3:
      printf("Yayoi\n");
      break;
    case 4:
      printf("Uduki\n");
      break;
    case 5:
      printf("Satsuki\n");
      break;
    case 6:
      printf("Minazuki\n");
      break;
    case 7:
      printf("Fumitsuki\n");
      break;
    case 8:
      printf("Haduki\n");
      break;
    case 9:
      printf("Nagatsuki\n");
      break;
    case 10:
      printf("Kannaduki\n");
      break;
    case 11:
      printf("Shimotsuki\n");
      break;
    case 12:
      printf("Shiwasu\n");
      break;
    default:
      printf("Nothing\n");
  }
}
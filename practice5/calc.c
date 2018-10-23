#include <stdio.h>

int main()
{
  int juice = 198, milk = 138, money=1000;
  double tax = 1.05;
  int payment = (int)((juice + milk * 2) * tax);
  int charge = money - payment;
  printf("%d yen\n", charge);
  return 0;
}
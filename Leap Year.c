#include <stdio.h>
#include <conio.h>
void main() {
   int year;
   clrscr();
   printf("Enter a year: ");
   scanf("%d", &year);

   else if (year % 4 == 0) {
      printf("%d is a leap year.", year);
   }
   else {
      printf("%d is not a leap year.", year);
   }

   getch();
}

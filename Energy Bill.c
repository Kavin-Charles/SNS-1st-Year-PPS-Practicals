#include <stdio.h> 
void main()
{
  float consumed, intial,final, amount; 
  clrscr();
  
  printf("Enter Intial Readings: "); 
  scanf("%f", &intial); 
  printf("Enter Final Readings: "); 
  scanf("%f", &final);
  
  consumed = final-intial;
  
  if (consumed >=200 && consumed <=500)
  {
    amount = consumed * 3.50;
  }
  else if (consumed >=100 && consumed <200)
  {
    amount = consumed * 2.50;
  }
  else
  {
    amount = consumed * 1.50;
  }
  printf("Electricity Bill for %.0f units is %.1f", consumed,amount); 
  
  getch();
}

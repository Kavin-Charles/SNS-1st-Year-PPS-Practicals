#include<stdio.h>      
#include<conio.h>
                                                                                
void main()                                                                     
{                                                                               
  struct book                                                                   
  {                                                                             
    int id;                                                                     
    char title[30], author[40];                                                 
    int price;                                                                
  };                                                                            
  struct book b1;     
  clrscr();
                                                                                
  printf("Enter book id, title, auther and price \n");                          
  scanf("%d %s %s %d", &b1.id, b1.title, b1.author, &b1.price);                 
                                                                                
  printf("\nbook id\ttitle \t auther \t price \n");                             
  printf("%d\t%s\t%s\t%f\n", b1.id, b1.title, b1.author, b1.price);             

  getch();
} 

#include <stdio.h>
#include <conio.h>
 
int main()
{
    int x = 10, y = 20, change(int*, int*);

    printf("In the Main() After Change():\na = %d b = %d\n", x, y);

    swapx(&x, &y); // Actual Parameters
 
    printf("In the Main() After Change():\na = %d b = %d\n", x, y);
 
    return 0;
}
 
int change(int a, int b) // Formal Parameters
{
    int t;
 
    t = *a;
    *a = *b;
    *b = t;
 
    printf("Inside Function:\nx = %d y = %d\n", *a, *b);
}

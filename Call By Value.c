#include <stdio.h>
#include <conio.h>
 
// Main function
int main()
{
    int a = 10, b = 20, change(int x, int y);

    printf("In the Main() After Change():\na = %d b = %d\n", a, b);

    swapx(a, b); // Actual Parameters
 
    printf("In the Main() After Change():\na = %d b = %d\n", a, b);
 
    return 0;
}
 
int change(int x, int y) // Formal Parameters
{
    int t;
 
    t = x;
    x = y;
    y = t;
 
    printf("Inside Function:\nx = %d y = %d\n", x, y);
}

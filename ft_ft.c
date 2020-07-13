#include <stdio.h>

int main ()
{
    
    int x = 42;
   
    int * x_ptr = & x;
    printf ("x = %d\n", x);
    printf ("x_ptr = %p\n", x_ptr);
    return 0;
}

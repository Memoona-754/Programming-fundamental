
#include <stdio.h>

int main(void) 
{
    // will this code run?
    //int *p1;
    //char *p2;
    //p2 = p1; //No bec it requires explicit type casting.
	             //p1 is of type int(pointer to integer). p2 is of type char(pointer to character).
               //p1 cant be assigned to p2 directly. It requires typecasting.


    int *p1;//pointer to integer
    char *p2;//pointer to char
    
    p1 = NULL;//initialize p1 to null(optional)     
    p2 = (char *)p1;// Assign p1 to p2 using type casting
    
    printf("p1 = %p\n", (void *)p1);
    printf("p2 = %p\n", (void *)p2);
    
    return 0;
}

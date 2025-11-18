#include<stdio.h>
int main()

{
    long value1 =200000,value2;
    long *lPtr;// pointer declaration as type long
    lPtr = &value1;//assign address of value1 to lPtr
    printf("%ld\n", *lPtr);//print value pointed to by lPtr(value stored in value1)
    value2 = *lPtr;//assign value pointed to by lPtr to value2. Value2=Value1
    printf("%ld\n", value2);//simply prints value of value2
    printf("%p\n", (void*)&value1);//print address of value1
    //use %p when printing addresses bec they are in hexadecimal
    //%p expects a void*
    //&value1 is a long*, so cast it to (void*) to match %p’s requirement
    
    printf("%p\n", (void*)lPtr);//print address stored in lPtr
	//Yes, it is the same address as address of value1

    return 0;
}
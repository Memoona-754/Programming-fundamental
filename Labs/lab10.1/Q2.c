#include <stdio.h>
void onlytype(int);
int main()
{
    int a = 5;
    printf("Calling function only type:\n");
    onlytype(a);
    return 0;
}
void onlytype(int a)
{
    printf("a is %d", a);
}
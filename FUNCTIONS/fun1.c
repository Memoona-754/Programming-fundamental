#include<stdio.h>
void england(){
    printf("You are in England\n");
    return;
}
void australia(){
    printf("You are in Australia\n");
    england();
    return;
}
void pakistan(){
    printf("You are in Pakistan\n");
    australia();
    return;
}
int main (){
    pakistan();
    return 0;
}
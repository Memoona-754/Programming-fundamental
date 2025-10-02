#include<stdio.h>\
int main() 
{ 
    char input;

    printf("Enter a character : ");
    scanf("%c",&input);

    if(input>='A' && input<='Z'){
        printf("The character is an uppercase letter");
    }else if(input>='a' && input<='z'){
        printf("The character is a lowercase letter");
    }else if(input>='0'  &&  input<='9'){
        printf("The character is a digit");
    }else{
        printf("The character is a special character");
    }
    return 0;
}
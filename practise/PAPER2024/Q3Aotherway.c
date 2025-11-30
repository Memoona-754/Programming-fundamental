#include<stdio.h>
int count_vowels(char str[]) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
            ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
        {
            count++;
        }
    }
    return count;
}
int main(){
     char str[200];
     printf("Enter any string : ");
     scanf("%s",str);

     int count=count_vowels(str);

     printf("Number of vowels in string is : %d",count);

     return 0;

}

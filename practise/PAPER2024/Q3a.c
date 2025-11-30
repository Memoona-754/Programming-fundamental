#include<stdio.h>
int count_vowels(char str[]) {
    char vowels[] = "aeiouAEIOU";
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        for (int j = 0; vowels[j] != '\0'; j++) {
            if (str[i] == vowels[j]) {
                count++;
                break;   // no need to keep checking
            }
        }
    }

    return count;
}

int main(){

      char str[100];
      printf("Enter an word : ");
      scanf("%s",str);

      int count = count_vowels(str);

      printf("Number of vowel in strig is: %d",count);

      return 0;
}
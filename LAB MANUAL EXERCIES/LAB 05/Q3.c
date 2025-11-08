#include <stdio.h>
int main() {
    float fsc, nts;

    // Taking input from user
    printf("Enter your F.Sc percentage: ");
    scanf("%f", &fsc);

    printf("Enter your NTS percentage: ");
    scanf("%f", &nts);

    // Checking conditions for Oxford University
    if (fsc > 70 && nts >= 70) {
        printf("You got admission in Oxford University (IT Department).\n");
    }
    else if (fsc > 70 && nts >= 60) {
        printf("You got admission in Oxford University (Electronics Department).\n");
    }
    else if (fsc > 70 && nts >= 50) {
        printf("You got admission in Oxford University (Telecommunication Department).\n");
    }
    // Checking conditions for MIT University
    else if (fsc >= 60 && fsc <= 70 && nts >= 50) {
        printf("You got admission in MIT University (IT Department).\n");
    }
    else if (fsc >= 50 && fsc < 59 && nts >= 50) {
        printf("You got admission in MIT University (Chemical Department).\n");
    }
    else if (fsc > 40 && fsc < 50 && nts >= 50) {
        printf("You got admission in MIT University (Computer Department).\n");
    }
    else {
        printf("Sorry, you are not eligible for any university.\n");
    }

    return 0;
}

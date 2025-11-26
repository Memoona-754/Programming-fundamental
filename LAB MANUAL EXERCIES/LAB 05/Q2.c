#include <stdio.h>
int main() {
    char type, size;
    int total = 0, t;

    printf("Enter coffee type (B = Black, W = White): ");
    scanf(" %c", &type);

    printf("Cup size (S = Single, D = Double): ");
    scanf(" %c", &size);

    printf("\n--- Coffee Making Process ---\n");

    // ---------------- WHITE COFFEE ----------------
    if (type == 'W' || type == 'w') {

        t = 15; if (size == 'D' || size == 'd') t = t + t/2;
        printf("Put Water .... %d mins\n", t); total += t;

        t = 15; if (size == 'D' || size == 'd') t = t + t/2;
        printf("Add Sugar .... %d mins\n", t); total += t;

        t = 20; if (size == 'D' || size == 'd') t = t + t/2;
        printf("Mix Well ..... %d mins\n", t); total += t;

        t = 2; if (size == 'D' || size == 'd') t = t + t/2;
        printf("Add Coffee ... %d mins\n", t); total += t;

        t = 4; if (size == 'D' || size == 'd') t = t + t/2;
        printf("Add Milk ..... %d mins\n", t); total += t;

        t = 20; if (size == 'D' || size == 'd') t = t + t/2;
        printf("Mix Well ..... %d mins\n", t); total += t;
    }

    // ---------------- BLACK COFFEE ----------------
    else if (type == 'B' || type == 'b') {

        t = 20; if (size == 'D' || size == 'd') t = t + t/2;
        printf("Put Water .... %d mins\n", t); total += t;

        t = 20; if (size == 'D' || size == 'd') t = t + t/2;
        printf("Add Sugar .... %d mins\n", t); total += t;

        t = 25; if (size == 'D' || size == 'd') t = t + t/2;
        printf("Mix Well ..... %d mins\n", t); total += t;

        t = 15; if (size == 'D' || size == 'd') t = t + t/2;
        printf("Add Coffee ... %d mins\n", t); total += t;

        t = 25; if (size == 'D' || size == 'd') t = t + t/2;
        printf("Mix Well ..... %d mins\n", t); total += t;
    }

    else {
        printf("Invalid Coffee Type!\n");
        return 0;
    }

    printf("\nTotal Coffee Time = %d minutes\n", total);
    printf("Your coffee is ready!\n");


    return 0;
}
  


#include <stdio.h>

// function to display a step
void showStep(char stepName[], int time) {
    printf("%s : %d mins\n", stepName, time);
}

// function to increase time by 50% if double size
int adjustTime(int time, int isDouble) {
    if (isDouble)
        return time + (time / 2);  // 50% more
    return time;
}

int main() {
    char type, manual;
    int isDouble;

    printf("Enter coffee type (W for White, B for Black): ");
    scanf(" %c", &type);

    printf("Is the cup double size? (1 for Yes, 0 for No): ");
    scanf("%d", &isDouble);

    printf("Is the coffee manual? (Y/N): ");
    scanf(" %c", &manual);

    printf("\n--- Coffee Machine Instructions ---\n\n");

    int totalTime = 0;

    if (type == 'W' || type == 'w') {  // White coffee
        int t1 = adjustTime(15, isDouble);
        int t2 = adjustTime(15, isDouble);
        int t3 = adjustTime(20, isDouble);
        int t4 = adjustTime(2, isDouble);
        int t5 = adjustTime(4, isDouble);
        int t6 = adjustTime(20, isDouble);

        showStep("Put Water", t1);
        showStep("Add Sugar", t2);
        showStep("Mix Well", t3);
        showStep("Add Coffee", t4);
        showStep("Add Milk", t5);
        showStep("Mix Well", t6);

        totalTime = t1 + t2 + t3 + t4 + t5 + t6;
    }
    else if (type == 'B' || type == 'b') {  // Black coffee
        int t1 = adjustTime(20, isDouble);
        int t2 = adjustTime(20, isDouble);
        int t3 = adjustTime(25, isDouble);
        int t4 = adjustTime(15, isDouble);
        int t5 = adjustTime(25, isDouble);

        showStep("Put Water", t1);
        showStep("Add Sugar", t2);
        showStep("Mix Well", t3);
        showStep("Add Coffee", t4);
        showStep("Mix Well", t5);

        totalTime = t1 + t2 + t3 + t4 + t5;
    }
    else {
        printf("Invalid coffee type.\n");
        return 0;
    }

    if (manual == 'N' || manual == 'n') {
        printf("\nTotal Coffee Time: %d mins\n", totalTime);
    }
    else {
        printf("\nManual Mode: Machine shows steps only (no time calculation).\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    int a[4][4];
    int i, j;

    // Input
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            scanf("%d", &a[i][j]);
        }
    }

    // Output pattern
    for(i = 0; i < 4; i++){
        if(i % 2 == 0){   // even row → forward
            for(j = 0; j < 4; j++){
                printf("%d,", a[i][j]);
            }
        }
        else{             // odd row → backward
            for(j = 3; j >= 0; j--){
                printf("%d,", a[i][j]);
            }
        }
    }

    return 0;
}

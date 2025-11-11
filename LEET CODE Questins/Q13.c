#include <stdio.h>

int main() {
    char board[8][8];
    int rRook = -1, cRook = -1;

    printf("Enter the 8x8 chessboard (characters R, B, p, .):\n");

    // Input board and find rook
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            scanf(" %c", &board[i][j]);
            if (board[i][j] == 'R') {
                rRook = i;
                cRook = j;
            }
        }
    }

    int count = 0;

    // Check upward
    for (int r = rRook - 1; r >= 0; r--) {
        if (board[r][cRook] == 'B') break;
        if (board[r][cRook] == 'p') {
            count++;
            break;
        }
    }

    // Check downward
    for (int r = rRook + 1; r < 8; r++) {
        if (board[r][cRook] == 'B') break;
        if (board[r][cRook] == 'p') {
            count++;
            break;
        }
    }

    // Check left
    for (int c = cRook - 1; c >= 0; c--) {
        if (board[rRook][c] == 'B') break;
        if (board[rRook][c] == 'p') {
            count++;
            break;
        }
    }

    // Check right
    for (int c = cRook + 1; c < 8; c++) {
        if (board[rRook][c] == 'B') break;
        if (board[rRook][c] == 'p') {
            count++;
            break;
        }
    }

    printf("Pawns the rook can capture: %d\n", count);

    return 0;
}

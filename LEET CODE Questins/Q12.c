#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int r, c, dist;
} Cell;

int compare(const void *a, const void *b) {
    Cell *x = (Cell *)a;
    Cell *y = (Cell *)b;
    return x->dist - y->dist;
}

int main() {
    int rows, cols, rCenter, cCenter;

    printf("Enter rows and cols: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter rCenter and cCenter: ");
    scanf("%d %d", &rCenter, &cCenter);

    int total = rows * cols;
    Cell *arr = (Cell *)malloc(total * sizeof(Cell));

    int idx = 0;

    // Fill all cells with their distances
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            arr[idx].r = r;
            arr[idx].c = c;
            arr[idx].dist = abs(r - rCenter) + abs(c - cCenter);
            idx++;
        }
    }

    // Sort by Manhattan distance
    qsort(arr, total, sizeof(Cell), compare);

    // Print result
    printf("Cells sorted by Manhattan distance:\n");
    for (int i = 0; i < total; i++) {
        printf("(%d, %d)\n", arr[i].r, arr[i].c);
    }

    free(arr);
    return 0;
}

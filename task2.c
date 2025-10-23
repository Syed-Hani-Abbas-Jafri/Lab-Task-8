#include <stdio.h>

int main() {
    int rows, col;
    int i, j; // Declared loop counters outside of the loop conditions
    
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &col);

    int A[rows][col], B[rows][col], sum[rows][col];

    printf("Enter elements of matrix A:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < col; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of matrix B:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < col; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    printf("MATRIX A IS\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < col; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    printf("Matrix B is \n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < col; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
    // Adding matrices A and B
    for (i = 0; i < rows; i++) {
        for (j = 0; j < col; j++) {
            sum[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("The sum of the two matrices is:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < col; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    int diff[rows][col];
    // Subtracting matrices A and B
    for (i = 0; i < rows; i++) {
        for (j = 0; j < col; j++) {
            diff[i][j] = A[i][j] - B[i][j];
        }
    }

    printf("The difference of the two matrices is:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < col; j++) {
            printf("%d ", diff[i][j]);
        }
        printf("\n");
    }
    int mul[rows][col];
    // Multiplying matrices A and B (Element-wise / Hadamard Product)
    for (i = 0; i < rows; i++) {
        for (j = 0; j < col; j++) {
            mul[i][j] = A[i][j] * B[i][j];
        }
    }

    printf("The Multiplication of the two matrices is:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < col; j++) {
            printf("%d ", mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}

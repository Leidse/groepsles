#include <stdio.h>

void transpose_matrix(int size, int matrix[][size]) { 
    int matrix2[size][size];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            matrix2[i][j] = matrix[i][j];
        }
    }
    
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            matrix[i][j] = matrix2[j][i];
        }
    }
}
int main(void) {
    int size = 3;
    int matrix[][3] = {{1, 1, 1},
                            {2, 2, 2},
                            {3, 3, 3}};
    transpose_matrix(size, matrix);
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d", matrix[i][j]);
        } printf("\n");
    } 

	return 0;
}

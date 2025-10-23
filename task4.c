#include <stdio.h>

int main() {
	
	int matrix [3][3] = {
	    { 12, 45, 32 },
	    { 2, 13, 45 },
	    { 56, 72, 41 }
	};
	
	int i, j, highest;
	
	highest = matrix[0][0]; 
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			if (matrix[i][j] > highest) {
				highest = matrix[i][j]; 
			}
		}
	}
    
	printf("Highest value in the matrix: %d\n", highest);
    
	return 0;
}

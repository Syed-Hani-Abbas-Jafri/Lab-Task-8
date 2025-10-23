#include <stdio.h> 

int main() {
	
	int rows=5;
	int cols=5;
	char classroom[rows][cols];
	int i,j;
	int present, absent=0;
	for (i=0; i< rows; i++) {
		for (j=0; j<cols; j++) {
			if ((i + j)%2 ==0) {
				classroom[i][j] ='x';
				present++;
			} else {
				classroom[i][j] ='o';
				absent++;
			}
		}
	}
	printf("Classroom Seating Chart:\n");
    printf("=========================\n");
    printf("(x = Student, o = Empty)\n\n");
	for (i=0; i< rows; i++) {
		printf("Row %d ", i + 1);
		for (j=0; j<cols; j++) {
		  printf("%c", classroom[i][j]);	
		}
		printf("\n");
	}
	printf("\nSummary:\n");
    printf("Students seated: %d\n", present);
    printf("Empty desks: %d\n", absent);
    printf("Total desks: %d\n", rows * cols);
	
	
	return 0;
}

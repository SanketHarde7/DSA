
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int numRows;

	printf("enter the total rows ");
	if (scanf("%d", &numRows) != 1 || numRows <= 0) {
		return 0;
	}

	int *row = (int *)calloc(numRows, sizeof(int));
	if (row == NULL) {
		return 1;
	}

	printf("the pascal triangle is \n");

	for (int i = 0; i < numRows; i++) {
		for (int j = i; j >= 0; j--) {
			if (j == 0 || j == i) {
				row[j] = 1;
			} else {
				row[j] = row[j] + row[j - 1];
			}
		}

		for (int j = 0; j <= i; j++) {
			printf("%d", row[j]);
			if (j < i) {
				printf(" ");
			}
		}
		printf("\n");
	}

	free(row);
	return 0;
}

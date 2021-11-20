#include <stdio.h>

int main() {
	int n; //size pola atau jumlah perulangan
	int i, j; //iterasi

	scanf("%d", &n);

	//nomor 1
	printf("\nnomor 1\n");
	for(i = n; i > 0; i--) {
		for(j = 0; j < i; j++) {
			printf("*");    // * * * * *
							// * * * *
							// * * *
							// * *
							// *
							//
							//
		}
		printf("\n");
	} // 5 - 1

	//nomor2
	printf("\nnomor 2\n");
	for(i = 0; i < n; i++) {
		for(j = n-i-1; j > 0; j--) {
			printf("*");
		}
		for(j = 0; j < n; j++) {
			printf("-");
		}
		printf("\n");
	} //0 - 4

	//nomor3
	printf("\nnomor 3\n");
	for(i = 0; i < n; i++) {
		for(j = n-i-1; j > 0; j--) {
			printf(" ");
		}
		for(j = 0; j < n; j++) {
			printf("*");
		}
		printf("\n");
	}

	for(i = 0; i < n-1; i++) {
		for(j = 0; j < i+1; j++) {
			printf(" ");
		}
		for(j = 0; j < n; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
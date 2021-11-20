#include <stdio.h>

typedef struct{
	char biner[50];
}arr;

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d", &n);

	int i=0, j=0;

	arr bil[n];
	char kode[n];
	int kunci;
	int binerkunci1[50];
	int binerkunci2[50];
	int jumlahbiner[n];
	int jumlahkunci = 0;
	int gabung[100];
	int tambah = 0;

	while( i< n){
		jumlahbiner[i] = 0;
		i++;
	}

	i=0;

	while(i<n ){
		scanf(" %c", &kode[i]);
		while(j>=0 ){
			scanf(" %c", &bil[i].biner[j]);
			jumlahbiner[i]++;
			if(bil[i].biner[j] == ';'){
				break;
			}
			j++;
		}
		j=0;
		i++;
	}
	scanf("%d", &kunci);
	printf("Hasil Gabung:\n");

	i=0;

	while(i < kunci){
		if(i == 0){
			i = 1;
		}else{
			i = i * 2;
			jumlahkunci++;
		}	
	}

	i=0;

	while(i < jumlahkunci){
		binerkunci1[i] = kunci % 2;
		kunci = kunci /2 ;
		i++;
	}

	j=0;

	while(i >= 0){
		binerkunci2[j] = binerkunci1[i-1];
		i--;
		j++;
	}

	j=0;
	i=0;
	while(i < n){
		while(j < jumlahbiner[i] + jumlahkunci -1){
			if( tambah < jumlahkunci){
				gabung[j] = binerkunci2[tambah];
				printf("%d",gabung[j]);
				j++;
			}
			if(tambah < jumlahbiner[i] - 1){
				gabung[j] = bil[i].biner[tambah];
				printf("%c",gabung[j]);
				j++;
			}
			tambah++;
		}
		printf("\n");
		j=0;
		tambah = 0;
		i++;
	}
	return 0;
}
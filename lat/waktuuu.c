#include <stdio.h>
int main(){

	/*
	Saya Rahma Maulida 2003688 mengerjakan TP1 
	dalam mata kuliah Algoritma dan Pemrograman 1
	untuk keberkahan-Nya maka saya tidak melakukan
	kecurangan seperti yang telah dispesifikasikan. Aamiin.
	*/
	
	//deklarasi variabel penampung angka
	int m;//waktu menit yg dibutuhkan tiap mencetak satu foto
	int s;//waktu detik yg dibutuhkan tiap mencetak satu foto
	int n;//banyaknya foto yg akan dicetak

	//deklarasi variabel penampung hasil operasi
	int jumlahWaktu, jam, menitAsli, menit, detik, banyakIstirahat;
		
	//meminta user memasukkan angka
	scanf("%d", &m);
	scanf("%d", &s);
	scanf("%d", &n);

	//proses operasi
	jumlahWaktu = (m * n * 60) + (s * n);//dalam detik
	jam = jumlahWaktu / 3600;
	menitAsli = (jumlahWaktu % 3600) / 60;
	detik = (jumlahWaktu % 3600) % 60;
	banyakIstirahat = jumlahWaktu / 1800;
	menit = menitAsli + banyakIstirahat;

	//menampilkan hasil operasi
	printf("Istirahat sebanyak : %d\n", banyakIstirahat);
	printf("Total waktu yang diperlukan : %d jam %d menit %d detik\n", jam, menit, detik);

	return 0;
}
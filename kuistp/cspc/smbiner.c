#include<stdio.h>
int main(){
    //deklarasi variabel, tipe data, nilai awal, dan size array
    int n = 0, i, biner = 0, desimal = 0, getbin = 0, pangkat = 1, sum = 0;
    int konv[50];

    //meminta masukan jumlah bilangan biner yang ingin dikonversi dan ditambahkan
    scanf("%d", &n);

    //perulangan untuk memasukkan dan mengonversi bilangan biner ke desimal
    for ( i = 0; i < n; i++)
    {
        //meminta masukan bilangan biner
        scanf("%d", &biner);

        //proses konversi, syarat konversinya adalah ketika bilangan biner tidak sama dengan nol
        while (biner!=0)
        {
            //mengambil angka biner yang paling kanan menggunakan mod
            getbin=biner%10;

            //mengubah biner paling kanan ke bilangan desimal
            //lalu ditambahkan dengan nilai dari variabel desimal sebelumnya
            desimal=getbin*pangkat+desimal;

            //mengurangi jumlah digit dari biner
            biner=biner/10;

            //menambah nilai dari pangkat
            //karena setiap maju ke kiri digitnya, pangkat digit biner dikali dua (mempunyai rasio dua)
            pangkat=pangkat*2;

            //operasi pengkonversian akan diulang selama nilai biner belum mencapai nol
        }

        //memasukkan hasil konversi ke i ke dalam array untuk disimpan
        konv[i]=desimal;

        //proses menambah nilai dari setiap isi array ke variabel sum
        sum+=konv[i];

        //mengembalikan nilai awal dari variabel untuk mengulang kembali proses konversi pada biner berikutnya
        desimal=0;
        getbin=0;
        pangkat=1;

        //proses akan diulang sebanyak n
    }

    //menampilkan hasil dari pertambahan konversi biner ke desimal
    printf("%d\n", sum);

    //mengembalikan nilai awal integer
    return 0;
}
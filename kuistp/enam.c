/*
    Saya Sekar Madu Kusumawardani [2007703] mengerjakan 
    soal TP6 Alpro 1 C1 2020 - PRPW20
    dalam mata kuliah Algoritma dan Pemrograman 1
    untuk keberkahanNya maka saya tidak melakukan kecurangan
    seperti yang telah dispesifikasikan. Aamiin
*/

//library yg digunakan
#include<stdio.h>

//bungkusan variabel
typedef struct enam
{
    char biner[100];        //untuk menampung biner masukan
    char kapital;           //untuk menampung kode masukan berupa huruf kapital
    int kunci;              //untuk menampung masukan kunci berupa angka
    int konvB[100];         //untuk menampung hasil konversi dari desimal kunci ke biner kunci
    int reverseB[100];      //untuk membalikkan urutan isi konvB
    int panjang1;           //untuk menginisialisasi jumlah biner masukan user
    int panjang2;           //untuk menginisialisasi jumlah biner hasil konversi kunci
    char gabung[100];       //untuk menampung gabungan dari biner masukan user dengan biner hasil konversi kunci
    int desimal;            //untuk menyimpan angka desimal hasil konversi biner gabungan
    int pangkat;            //untuk mengubah biner menjadi desimal
}Arr;

int main(){
    int n;                  //inisialisasi banyaknya file
    scanf("%d", &n);        //meminta masukan untuk mengisi var n
    Arr arr[n];             //inisialisasi bungkusan
    int i = 0, j = 0;       //deklarasi variabel iterator

    //untuk memasukkan kode dan biner dari setiap file
    //akan terus diulang sebanyak jumlah file yang diminta
    while (i < n)
    {
        scanf(" %c", &arr[i].kapital);  //meminta masukan kode untuk file berupa huruf kapital

            //permintaan masukan biner nama file
            //akan terus diulang selama j bilangan real positif
            while (arr[i].biner[j-1] != ';')
            {
                scanf(" %c", &arr[i].biner[j]);         //meminta masukan biner
                    //if (arr[i].biner[j] == ';') break;  //perulangan akan berhenti jika masukan user berupa karakter ';'
                arr[i].panjang1 = j;                //untuk mendapatkan panjang array atau jumlah isi array
                j++;                                    //increment nilai j sebanyak 1
            }
        j=0;    //kembalikan nilai j menjadi nol jika sudah selesai menginput biner file

            //proses konversi char ke integer (membuat nilai biner menjadi 0 dan 1)
            //akan terus diulang sebanyak panjang array nama file
            while (j <= arr[i].panjang1)
            {
                arr[i].biner[j] = arr[i].biner[j] - 48; //mengubah biner char menjadi integer
                j++;
            }
        j=0;    //kembalikan nilai j menjadi nol jika sudah selesai mengonversi biner char
        i++;    //increment nilai i sebanyak 1
    }

    scanf("%d", &arr[0].kunci);     //meminta masukan kunci berupa angka
    int konv = arr[0].kunci;        //memindahkan nilai kunci ke var konv -untuk memudahkan operasi


    //proses konversi nilai desimal kunci menjadi biner
    //akan terus diulang selama kunci tidak sama dengan nol
    i = 0;                              //penentapan nilai awal iterator i
    while (konv != 0)
    {
        arr[0].konvB[i] = konv % 2;     //nilai dari konv di modulo dua kemudian disimpan di array konvB sebagai nilai dari biner digit ke i
        konv /= 2;                      //nilai dari konv dibagi dua
        arr[0].panjang2 = i + 1;        //untuk mendapatkan panjang array atau jumlah isi array
        i++;                            //increment nilai i sebanyak 1
    }
    
    //proses membalikkan urutan isi array konvB
    //akan terus diulang selama i bilangan real positif
    //nilai awal i melanjutkan dari nilai i sebelumnya
    j = 0;                                      //penetapan nilai awal iterator j
    while (i >= 0)
    {
        arr[0].reverseB[j] = arr[0].konvB[i-1]; //rumus membalikkan isi array
        j++;                                    //increment nilai j sebanyak 1
        i--;                                    //decrement nilai i sebanyak 1
    }
    
    //menampilkan keluaran hasil gabung
    printf("Hasil Gabung:\n");
    
    //proses penggabungan biner nama file dengan biner kunci
    //akan terus diulang sebanyak permintaan jumlah file
    int index = 0;      //deklarasi variabel index dan penetapan nilai awal
    i = 0;              //penetapan nilai awal i
    while (i < n)
    {
        j = 0;          //penetapan nilai awal j

        //penggabungan biner dilakukan disini
        //akan terus diulang sebanyak panjang array biner nama file + panjang array biner kunci
        while (j < arr[i].panjang1 + arr[0].panjang2)
        {
            //dijalankan jika index kunci kurang dari panjang array konversi binernya
            //agar penggabungan selang seling
            if (index < arr[0].panjang2)
            {
                arr[i].gabung[j] = arr[0].reverseB[index];  //memasukkan biner hasil konversi kunci ke array biner gabungan
                printf("%d", arr[i].gabung[j]);             //menampilkan nilai yang sudah dimasukkan
                j++;                                        //increment nilai j sebanyak 1 agar lanjut ke pengisian index berikutnya
            }

            //pengisian index berikutnya (setelah nilai konversi kunci)
            //dijalankan jika index biner nama file kurang dari panjang arraynya
            if (index < arr[i].panjang1)
            {
                arr[i].gabung[j] = arr[i].biner[index];     //memasukkan biner nama file ke array biner gabungan
                printf("%d", arr[i].gabung[j]);             //menampilkan nilai yang sudah dimasukkan
                j++;                                        //increment nilai j sebanyak 1 agar lanjut ke pengisian index berikutnya
            }
            index++;    //increment nilai index jika program diatasnya sudah dijalankan
        }
        printf("\n");   //buat new line
        index = 0;      //mengembalikan nilai index ke penetapan awal
        j = 0;          //mengembalikan nilai index ke penetapan awal
        i++;            //increment nilai i sebanyak 1
    }

    //menampilkan keluaran hasil pemrosesan password
    printf("\nPassword:\n");

    //proses menampilkan kode file dari masukan kode paling akhir
    //akan diulang selama i lebih besar atau sama dengan nol
    i = n - 1;  //penetapan nilai awal iterator ini untuk menginisialisasi index terakhir dari array kode
    while (i >= 0)
    {
        printf("%c", arr[i].kapital);   //menampilkan kode file
        i--;                            //decrement nilai i agar index mundur
    }

    //proses konversi biner gabungan menjadi desimal
    //diulang sebanyak jumlah file yang dimasukkan
    arr[0].pangkat = 1;     //inisialisasi nilai awal pangkat untuk mengubah biner menjadi desimal
    i = 0;                  //penetapan nilai awal iterator i
    while (i < n)
    {
        j = (arr[i].panjang1 + arr[0].panjang2) - 1;    //penetapan nilai awal j untuk inisialisasi index array gabungan mulai dari index terakhir
        arr[i].desimal = 0;                             //penetapan nilai awal var desimal untuk antisipasi error

        //diulang sampai nilai j = 0
        while (j >= 0)
        {
            //mengambil nilai array gabungan dari belakang
            //lalu dikali dengan nilai var pangkat
            //lalu ditambah dengan nilai terbaru dari var desimal
            arr[i].desimal = arr[i].gabung[j] * arr[0].pangkat + arr[i].desimal;

            //setiap perulangan, nilai var pangkat dikali 2
            arr[0].pangkat = arr[0].pangkat * 2;
            j--; //decrement nilai j sebanyak 1 untuk mendapatkan index array dari belakang ke depan
        }
        printf("-%d", arr[i].desimal);  //menampilkan desimal hasil konversi
        arr[0].pangkat = 1;             //mengembalikan nilai pangkat ke semula
        i++;                            //increment nilai i sebanyak 1
    }

    printf("\n");   //menampilkan baris baru
    return 0;       //mengembalikan nilai integer dalam fungsi int
}
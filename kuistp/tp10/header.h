/*
    Saya Sekar Madu Kusumawardani [2007703] mengerjakan 
    soal TP10 Alpro 1 C1 2020 - BSMBC20
    dalam mata kuliah Algoritma dan Pemrograman 1
    untuk keberkahanNya maka saya tidak melakukan kecurangan
    seperti yang telah dispesifikasikan. Aamiin
*/

/*=== LIBRARY ===*/
#include<stdio.h> //---------------> library berisi fungsi input output
#include<string.h> //--------------> library berisi fungsi pengolah string

/*=== DEKLARASI FUNGSI & PROSEDUR ===*/
int CekPal(char str[]); //---------> fungsi mengecek palindrom
void Pola1(char str[]); //---------> prosedur pembentuk pola string ganjil
void Pola2(char str[]); //---------> prosedur pembentuk pola string genap
void Pola(int a, char str[]); //---> prosedur pemanggil prosedur pola
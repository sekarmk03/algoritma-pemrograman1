#include<stdio.h>
#include<string.h>
int main(){
    char sub[100]; //memberi alokasi array jangan di pas (langsung tembak banyak)
    char kalimat[100];
    int sama = 0, jumlah = 0;
    scanf("%s", &sub);
    scanf("%s", &kalimat);
    int i = 0, j = 0;
    while (i < strlen(kalimat)){
        while (j < strlen(sub)){
            if (kalimat[i+j] == sub[j]){
                sama++;
            }
            j++;
        }
        j = 0;
        if (sama == strlen(sub)){
            jumlah++;
        }
        sama = 0;
        i++;
    }
    printf("%d\n", jumlah);
    return 0;
}
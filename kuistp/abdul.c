#include<stdio.h>
int main(){
    int n;
    int i,j;
    scanf("%d",&n);
    unsigned char huruf[n];
    int simpan;
    for (i=0;i<n;i++){
        scanf(" %c",&huruf[i]);
        if (huruf[i]>='A' && huruf[i]<='Z'){
            simpan=n%26;
            huruf[i]=huruf[i]-simpan;
            for (j=0;j<26;j++){
                if (huruf[i]<'A' && n<=26){
                    huruf[i]=huruf[i]+26;
                } else if (huruf[i]<65 && n>26){
                    huruf[i]=huruf[i]+26;
                }
            }
        } else if (huruf[i]>='a' && huruf[i]<='z'){
            huruf[i]=huruf[i]+n;
            for (j=0;j<26;j++){
                if (huruf[i]>'z' && n<=26){
                    huruf[i]=huruf[i]-26;
                } else if (huruf[i]>'z' && n>26){
                    huruf[i]=huruf[i]-26;
                }
            }
        }
        printf("%c", huruf[i]);
    }
    printf("\n");
    return 0;
}
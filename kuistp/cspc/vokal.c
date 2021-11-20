#include <stdio.h>
int main (){
    char c1, c2, c3;
    int cek=0;
    scanf("%c\n%c\n%c", &c1, &c2, &c3);
    if ((c1=='a')||(c1=='i')||(c1=='u')||(c1=='e')||(c1=='o'))
    {
        cek+=1;
    }
    if ((c2=='a')||(c2=='i')||(c2=='u')||(c2=='e')||(c2=='o'))
    {
        cek+=1;
    }
    if ((c3=='a')||(c3=='i')||(c3=='u')||(c3=='e')||(c3=='o'))
    {
        cek+=1;
    }
    
    
    if (cek>=1)
    {
        printf("Valid\n");
    } else
    {
        printf("Tidak valid\n");
    }
    
    return 0;
    
}
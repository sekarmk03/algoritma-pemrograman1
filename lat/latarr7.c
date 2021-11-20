#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int tabInt[n];
    int i;
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &tabInt[i]);
    }
    int maksimal = tabInt[0]; //agar nilai si maksimal sama dengan nilai dari index pertama pada array
    for ( i = 1; i < n; i++) 
    {
        if (maksimal<tabInt[i]) //mengecek apakah nilai dari index pertama kurang dari index ke i
        {
            maksimal=tabInt[i]; //jika benar, maka update nilai dari variabel maksimal
        }
    }
    printf("nilai maksimal : %d\n", maksimal);
    return 0;
}
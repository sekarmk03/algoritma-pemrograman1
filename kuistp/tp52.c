#include<stdio.h>
int main(){
    int n,i,j,a;
    scanf("%d", &n);
    unsigned char arr[n];
    for (i = 0; i < n; i++)
    {
        scanf(" %c", &arr[i]);
        if (arr[i]>=65 && arr[i]<=90)
        {
            if (n>65)
            {
                a=n%26;
                arr[i]=arr[i]-a;
                //arr[i]=arr[i]+26;
            }
            else if (n<=65)
            {
                arr[i]=arr[i]-n;
                for ( j = 0; j < 26; j++)
                {
                    if (arr[i]<65 && n<=26)
                    {
                        arr[i]=arr[i]+26;
                        //arr[i]=90-(64-arr[i]);
                        //break;
                    }
                    else if (arr[i]<65 && n>26)
                    {
                        //arr[i]=90-(64-arr[i]);
                        arr[i]=arr[i]+26;
                    }
                }
            }
        }
        else if (arr[i]>=97 && arr[i]<=122)
        {
            arr[i]=arr[i]+n;
            for ( j = 0; j < 26; j++)
            {
                if (arr[i]>122 && n<=26)
                {
                    arr[i]=96+(arr[i]-122);
                    //arr[i]=arr[i]-26;
                    break;
                }
                else if (arr[i]>122 && n>26)
                {
                    arr[i]=96+(arr[i]-122);
                    //arr[i]=arr[i]-26;
                }
            }
        }
        printf("%c", arr[i]);
    }
    printf("\n");
    return 0;
}
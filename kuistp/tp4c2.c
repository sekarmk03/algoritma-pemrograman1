#include<stdio.h>
int main(){
    int n;
    char c;
    int i,j;
    scanf("%d %c", &n, &c);
    for ( j = 0; j < 1; j++)
    {
        for ( i = 0; i < 1; i++)
        {
            printf("|");
        }
        for ( i = 0; i < (n*2+1)-(2*j); i++)
        {
            printf(" ");
        }
        if ((c>=65 && c<=90)||(c>=97 && c<=122))
        {
            for (i = 0; i < (n*2)+(j*2+2); i++)
            {
                printf("%d", j*2);
            }
        } else if ((c>=48 && c<=57))
        {
            for (i = 0; i < (n*2)+(j*2+2); i++)
            {
                printf("%d", j*2+1);
            }
        }
        for ( i = 0; i < 3+((n-1)*5); i++)
        {
            printf(" ");
        }
        if ((c>=65 && c<=90)||(c>=97 && c<=122))
        {
            for (i = 0; i < (n*2)+(j*2+2); i++)
            {
                printf("%d", j*2);
            }
        } else if ((c>=48 && c<=57))
        {
            for (i = 0; i < (n*2)+(j*2+2); i++)
            {
                printf("%d", j*2+1);
            }
        }
        printf("\n");
    }
    
    for ( j = 0; j < n-1; j++)
    {
        for ( i = 0; i < 1; i++)
        {
            printf("|");
        }
        for ( i = 0; i < (n*2+1)-(2*(j+1)); i++)
        {
            printf(" ");
        }
        if ((c>=65 && c<=90)||(c>=97 && c<=122))
        {
            for (i = 0; i < (j+1)+1; i++)
            {
                printf("%d", (j+1)*2);
            }
        } else if ((c>=48 && c<=57))
        {
            for (i = 0; i < (j+1)+1; i++)
            {
                printf("%d", (j+1)*2+1);
            }
        }
        for ( i = 0; i < (n*2)+(j*2+2); i++)
        {
            printf(" ");
        }
        if ((c>=65 && c<=90)||(c>=97 && c<=122))
        {
            for (i = 0; i < (j+1)+1; i++)
            {
                printf("%d", (j+1)*2);
            }
        } else if ((c>=48 && c<=57))
        {
            for (i = 0; i < (j+1)+1; i++)
            {
                printf("%d", (j+1)*2+1);
            }
        }
        printf("\n");
    }
    for ( j = 0; j < n; i++)
    {
        for ( i = 0; i < 2; i++)
        {
            printf(" ");
        }
        if ((c>=65 && c<=90)||(c>=97 && c<=122))
        {
            for (i = 0; i < n; i++)
            {
                printf("%d", (n*2)-((n*2)*(j)));
            }
        } else if ((c>=48 && c<=57))
        {
            for (i = 0; i < n; i++)
            {
                printf("%d", (n*2)+8+1);
            }
        }
    }
    
        
    return 0;
}
#include <stdio.h>
int main (){
    char c1, c2, c3, c4, c5, c6;
    scanf("%c\n%c\n%c\n%c\n%c\n%c", &c1, &c2, &c3, &c4, &c5, &c6);
        if (((c2=='1'||c2=='2'||c2=='3'||c2=='4'||c2=='5'||c2=='6'||c2=='7'||c2=='8'||c2=='9')&&
        (c4=='1'||c4=='2'||c4=='3'||c4=='4'||c4=='5'||c4=='6'||c4=='7'||c4=='8'||c4=='9')&&
        (c6=='1'||c6=='2'||c6=='3'||c6=='4'||c6=='5'||c6=='6'||c6=='7'||c6=='8'||c6=='9'))||
        ((c1=='1'||c1=='2'||c1=='3'||c1=='4'||c1=='5'||c1=='6'||c1=='7'||c1=='8'||c1=='9')&&
        (c3=='1'||c3=='2'||c3=='3'||c3=='4'||c3=='5'||c3=='6'||c3=='7'||c3=='8'||c3=='9')&&
        (c5=='1'||c5=='2'||c5=='3'||c5=='4'||c5=='5'||c5=='6'||c5=='7'||c5=='8'||c5=='9')))
        {
            printf("kombinasi valid\n");
        }else
        {
            printf("kombinasi tidak valid\n");
        }
    return 0;
}

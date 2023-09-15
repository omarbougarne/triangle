#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l;
    int i, j;
    printf("Entrer le nombre de ligne");
    scanf("%d",&l);

    for(i = 1; i <= l; i++){
    for(j = 1; j <= l-i; j++){
        printf(" ");
    }
    for(j=1; j<= (2*i-1); j++){
        printf("* ");
    }
    printf("\n");
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;

    printf("entrer un nombre : ");
    scanf("%d",&n);

    int T[n];

    for(i = 0 ; i < n ; i++){
        printf("entrer les elements de tableaux t[%d] = ", i + 1);
        scanf("%d",&T[i]);
    }

    for(i = 0 ; i < n ; i++){
        printf(" t[%d] = %d \n", i + 1, T[i]);
     }
    return 0;
}

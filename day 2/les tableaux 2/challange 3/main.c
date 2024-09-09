#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i,s;

    printf("entrer un nombre : ");
    scanf("%d",&n);

    int T[n]; 

    for(i = 0 ; i < n ; i++){
        printf("entrer les elements de tableaux t[%d] = ", i + 1);
        scanf("%d",&T[i]);
    }
s = 0;
    for(i = 0 ; i < n ; i++){
            s = s + T[i];
     }
            printf(" la somme est : %d \n", s);
    return 0;
}

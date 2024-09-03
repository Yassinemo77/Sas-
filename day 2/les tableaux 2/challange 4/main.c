#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i,max;

    printf("entrer un nombre : ");
    scanf("%d",&n);

    int T[n];

    for(i = 0 ; i < n ; i++){
        printf("entrer les elements de tableaux t[%d] = ", i + 1);
        scanf("%d",&T[i]);
    }

        max = T[0];
    for(i = 0 ; i < n ; i++){
        if(max < T[i]){
            max = T[i];
        }
     }
    printf(" le max est : %d \n", max);
    return 0;
}

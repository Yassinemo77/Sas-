#include <stdio.h>
#include <stdlib.h>

int main()
{
    char T[10];
    int n, i , m;

    printf("entrer un nombre : !\n");
    scanf("%d",&n);

    m = 0;

    for(i = 0; i < 10 ; i++){
        m = n * (i + 1);
        T[i] = m;
        printf("%d * %d = %d \n",n , i + 1, T[i]);

    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, f;

    printf("entrer un nombre : ");
    scanf("%d",&n);


f = 1;
    for(i = 1 ; i <= n ; i++){
        f = f  * i;

    }

printf("%d", f);
    return 0;
}

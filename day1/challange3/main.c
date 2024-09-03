#include <stdio.h>
#include <stdlib.h>

int main()
{
 int n, i, s;

    printf("entrer un nombre : ");
    scanf("%d",&n);


s = 0;
    for(i = 1 ; i <= n ; i++){
        s = s  + i;

    }

printf("%d", s);    return 0;
}

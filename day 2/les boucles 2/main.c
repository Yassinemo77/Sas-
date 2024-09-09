#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;

    printf("entrer un nombre : ");
    scanf("%d",&n);



    for(i = 10 ; i >= 0 ; i--){
        printf("%d * %d = %d \n", n , i, n * i  );
    }



    return 0;
}

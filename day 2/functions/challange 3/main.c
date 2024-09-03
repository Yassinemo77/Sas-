#include <stdio.h>
#include <stdlib.h>



int min(a,b){
    int minimum;

    if(a < b){
        minimum = a;
    }else{
        minimum = b;
    }
    return minimum;
}

int main()
{
    int a , b;

    printf("entrer nombre a : ");
    scanf("%d",&a);

    printf("entrer nombre b : ");
    scanf("%d",&b);

    printf("le max est = %d" , min(a,b));

    return 0;
}

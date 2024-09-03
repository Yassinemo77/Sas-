#include <stdio.h>
#include <stdlib.h>



int multi(a,b){
    int s  = a * b;
    return s;
}

int main()
{
    int a , b;


    printf("entrer nombre a : ");
    scanf("%d",&a);

    printf("entrer nombre b : ");
    scanf("%d",&b);

   printf("la somme de a et b  = %d" , multi(a,b));

    return 0;
}

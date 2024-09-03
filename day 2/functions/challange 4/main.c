#include <stdio.h>
#include <stdlib.h>



int max(a,b){
    int maximum;

    if(a < b){
        maximum = a;
    }else{
        maximum = b;
    }
    return maximum;
}

int main()
{
    int a , b;

    printf("entrer nombre a : ");
    scanf("%d",&a);

    printf("entrer nombre b : ");
    scanf("%d",&b);

    printf("le max est = %d" , max(a,b));

    return 0;
}

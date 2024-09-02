#include <stdio.h>

int main()
{
    
    int c;
    float k = 273.15;
    float s;
        printf("entrer c : \n");
        scanf("%d",&c);
        s = k + c;
        printf(" la température en Celsius et la transforme en Kelvin. Formule : %f ",s);

    return 0;
}
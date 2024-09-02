#include <stdio.h>

int main()
{
    
     int c;
    
    
        printf("entrer la valeur de c :");
        scanf("%d",&c);
        if(c < 0){
            printf("c est solide");
        }else if(c<0 && c < 100){
            printf("c est liquide");
            
        }else{
            printf("Gaz");

        }
 
    return 0;
}
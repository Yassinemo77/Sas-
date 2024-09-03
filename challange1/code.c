#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nom[100], prenom[100], sex[100], email[100], age[100], adress[100];
    printf("entrer le nom  : \n");
    gets(nom);

    printf("entrer le prenom  : \n");
    gets(prenom);

    printf("entrer le sex  : \n");
    gets(sex);

    printf("entrer le email  : \n");
    gets(email);

    printf("entrer le age  : \n");
    gets(age);

    printf("entrer le adress  : \n");
    gets(adress);

    printf("le nom : %s ", nom);
    printf("le prenom : %s ", prenom);

    printf("le sex : %s ", sex);

    printf("le email : %s ", email);

    printf("l'age : %s ", age);

    printf("l'adress : %s ", adress);

    return 0;
}

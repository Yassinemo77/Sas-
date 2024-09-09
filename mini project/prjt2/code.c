// contact 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Contacts{
    char nom[100];
    char tele[100];
    char email[100];
};


struct Contacts contact[100];
int indexContact = 0;

void searchmain(){
char search[100];
    if(indexContact <= 0 ){
        printf("no contact found please add one...");
     }
    printf("entrer le de contact : ");
    scanf("%s",&search);
   for(int i = 0 ; i < indexContact ; i++ ){
        int res = strcmp(search, contact[i].nom);
        if(res == 0){
            printf("entrer la nouvelle valeur de tele : ");
            scanf("%s", contact[i].tele);

            printf("entrer la nouvelle valeur d'email : ");
            scanf("%s", contact[i].email);
          }else{
            printf("contact not found");
        }
    }
}

 void add(){
    printf("entrer le nom de contact : ");
    scanf("%s",&contact[indexContact].nom);

    printf("entrer le telephone de contact : ");
    scanf("%s",&contact[indexContact].tele);

    printf("entrer l'email de contact : ");
    scanf("%s",&contact[indexContact].email);

    indexContact++;
 }


void update(){

searchmain();

}

void afficher(){
    if(indexContact <= 0){
        printf("there is no contact...");
    }else{
    }for(int i = 0 ; i < indexContact ; i++){
        printf("######################### TOTAL CONTACT : %d ################################\n", i + 1);
        printf("le nom de contact : %s \n",contact[i].nom);

        printf("le tele de contact : %s \n",contact[i].tele);

        printf("l'email de contact : %s \n",contact[i].email);
    }
}

 void menu(){
    printf("######################### MENU ################################\n");
    printf("1- ajouter un contact : \n");
    printf("2- afficher tout les contact : \n");
    printf("3- modifer un contact : \n");
    printf("4- supprimer un contact : \n");
    printf("5- chercher un contact : \n");
 }

 void deletes(){
    if(indexContact <= 0 ){
        printf("no contact found please add one...");
     }
    char search[100];
    printf("entrer le nom de contact : ");
    scanf("%s",&search);
   for(int i = 0 ; i < indexContact ; i++ ){
        int res = strcmp(search, contact[i].nom);
        if(res == 0){
            for(int j = i ; j < indexContact - 1  ; j++ ){
                contact[i] = contact[i+1];
          }
          printf("contact delete with success \n");
          indexContact--;
            return;
        }
 }
            printf("contact not found... \n");
 }

void find(){
        printf("######################### FIND CONTACT ################################\n");
if(indexContact <= 0 ){
        printf("no contact found please add one...");
     }
    char search[100];
    printf("entrer le nom de contact : ");
    scanf("%s",&search);
   for(int i = 0 ; i < indexContact ; i++ ){
        int res = strcmp(search, contact[i].nom);
        if(res == 0){
        printf("name : %s \n",contact[i].nom);

        printf("tele : %s \n",contact[i].tele);

        printf("email : %s \n",contact[i].email);

        }
 }
            printf("contact not found... \n");
}
 int main()
{
    int choix;
    do{
        menu();
        printf("choisir un choix : ");
        scanf("%d",&choix);

    switch(choix){
        case 1 :
            add();
            break;
        case 2 :
            afficher();
            break;
        case 3 :
            update();
            break;
        case 4:
            deletes();
            break;
        case 5:
            find();
            break;
    }


    }while(choix < 6);

    return 0;
}

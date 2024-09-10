#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct livres
{
    char titre[100];
    char auteur[100];
    int prix;
    int quantite;
};

int numBooks = 0;
int maxBooks = 100;

struct livres biblio[100];

void add()
{
    if (numBooks >= maxBooks)
    {
        printf("La bibliothèque est pleine.\n");
        return;
    }

    printf("---------------------------------------------\n");
    printf("Entrez le nom du livre: ");
    scanf("%s", &biblio[numBooks].titre);

    printf("Entrez l'auteur du livre: ");
    scanf("%s", &biblio[numBooks].auteur);

    printf("Entrez le prix: ");
    scanf("%d", &biblio[numBooks].prix);

    printf("Entrez la quantite : ");
    scanf("%d", &biblio[numBooks].quantite);

    numBooks++;
    printf("---------------------------------------------\n");
}

void affichageLivres()
{
    for (int i = 0; i < numBooks; i++)
    {
        printf(" \n");
        printf("=========================================== \n");
        printf("=================AFFICHAGE ========================== \n");
        printf("Livre numero %d\n", i + 1);
        printf("Nom du livre: %s\n", biblio[i].titre);
        printf("Auteur du livre: %s\n", biblio[i].auteur);
        printf("Prix du livre: %d\n", biblio[i].prix);
        printf("Quantite du livre: %d\n", biblio[i].quantite);
        printf("---------------------------------------------\n");
        printf("=====================================\n");
    }
}

void affichageMenu()
{
    printf("=========================================== \n");
    printf("=================MENU========================== \n");
    printf("1- Ajouter un livre:\n");
    printf("2- Afficher les livres:\n");
    printf("3- Modifier un livre:\n");
    printf("4- Supprimer un livre:\n");
    printf("5- Total livre quatite :\n");
}

void update()
{
    char tab[100];
    printf("Rechercher le livre pour la mise à jour: ");
    scanf("%s", &tab);

    if (numBooks > 0)
    {
        for (int i = 0; i < numBooks; i++)
        {
            int res = strcmp(tab, biblio[i].titre);
            if (res == 0)
            {
                printf("Entrez la nouvelle valeur de quantite: ");
                scanf("%d", &biblio[i].quantite);
                break;
            }
        }
    }
    else
    {
        printf("Aucun livre trouvé.\n");
    }
}

void deletes()
{
    char tab[100];

    printf("Rechercher le livre à supprimer: ");
    scanf("%s", &tab);

    for (int i = 0; i < numBooks; i++)
    {
        int res = strcmp(tab, biblio[i].titre);
        if (res == 0)
        {
            printf("Index du livre: %d\n", i);

            for (int j = i; j < numBooks - 1; j++)
            {
                biblio[j] = biblio[j + 1];
            }
            numBooks--;
            break;
        }
    }
}

void totalLivres()
{
    printf("=========================================== \n");
    printf("=================TOTAL LIVRES QUATITE========================== \n");
    int s;
    s = 0;
    for (int i = 0; i < numBooks; i++)
    {
        s = s + biblio[i].quantite;
    }
    printf("la somme de quantite de livres est: %d /n", s);
}

int main()
{
    int choix;
    do
    {
        affichageMenu();
        printf("Entrez un choix: ");
        scanf("%d", &choix);

        switch (choix)
        {
        case 1:
            add();
            break;
        case 2:
            affichageLivres();
            break;
        case 3:
            update();
            break;
        case 4:
            deletes();
            break;
        case 5:
            totalLivres();
            break;
        default:
            printf("Choix invalide.\n");
        }
    } while (choix < 6);

    return 0;
}
/////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct etudiants{
    int id;
    char nom[100];
    char prenom[100];
    char dateDeNaissance[100];
    char departement[100];
    float noteGenerale;
};

struct etudiants etudiant[100];
int idCounter  = 0;
int numEtediant = 0;

void menu(){
    printf("\t 1- Ajouter un etudiant : \n");
    printf("\t 2- modifier un etudiant : \n");
    printf("\t 3- supprimer un etudiant : \n");
    printf("\t 4- afficher les details d'un etudiant : \n");
    printf("\t 5- afficher la moyenne generale  : \n");
    printf("\t 6- afficher les statistiques : \n");
}

void ajouter(){
    printf("entrer votre nom : ");
    scanf(" %[^\n]s",&etudiant[numEtediant].nom);

    printf("nentrer votre prenom : ");
    scanf(" %[^\n]s",&etudiant[numEtediant].prenom);

    printf("entrer la date de naissance : ");
    scanf(" %[^\n]s",&etudiant[numEtediant].dateDeNaissance);

    printf("entrer la departement : ");
    scanf(" %[^\n]s",&etudiant[numEtediant].departement);

    printf("entrer la note generale : ");
    scanf("%.2f",&etudiant[numEtediant].noteGenerale);

    etudiant[numEtediant].id = idCounter++;

    numEtediant++;
}

void rechercherParLeNom(){
    char nom[100];
    printf("entrer le nom de l'etudiant");
    scanf("%s",&nom);

    for(int j = 0 ; j < numEtediant ; j++){
        int res = strcmp(etudiant[numEtediant].nom, nom);

        if(res == 0){
                printf("le nom : %s : ", etudiant[j].nom);

                printf("entrer votre prenom : %s",etudiant[j].prenom);

                printf("entrer la date de naissance : %s", etudiant[j].dateDeNaissance);

                printf("entrer la departement : %s",etudiant[j].departement);

                printf("entrer la note generale : %s", etudiant[j].noteGenerale);

                printf("entrer la note generale : %s", etudiant[j].noteGenerale);
        }
    }
}

int main()
{
    int choix;
    do{
        menu();
        printf("entrer un choix : ");
        scanf("%d",&choix);

        switch(choix){
        case 1 :
            ajouter();
            break;
        case 2 :
            rechercherParLeNom();
            break;
        }

    }while(choix < 4);

    return 0;
}

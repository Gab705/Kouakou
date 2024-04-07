#include <stdio.h>
#include <math.h>
#include <string.h>
#include <unistd.h>
#include <conio.h>


//FONCTION SERVANT A CALCULER LE PGCD ENTRE DEUX NOMBRES

int gcd(int diviseur, int dividende)
{
    int reste;
    while (reste != 0)
    {
        reste = dividende % diviseur;
        dividende = diviseur;
        diviseur = reste;
    }
    return(dividende);
}

//FONCTION SERVANT A CALCULER LE PGCD ENTRE DEUX NOMBRES


// FONCTION SERVANT A TRIER UN TABLEAU PAR ORDRE CROISSANT

void cres(float tab[],int size)  // Nom et paramètres de la fonction
{
    int i,j;  // Déclaration des variables
    float inter;
    
    for (i = 0; i < size; i++)  // Première boucle pour le tri
    {
    
        for (j = (i+1); j < size; j++)  // Deuxième boucle pour le tri 
        
        {
            if (tab[i]>tab[j])    // Vérification de la condition
            {
                inter = tab[i];      // Interchangement de place
                tab[i] = tab[j];
                tab[j] = inter;
            }
            
        }
        
    
    }
    
    printf("[");  // Affichage du crochet du début
    
    for (i = 0; i < size-1; i++)  // Boucle pour l'affichage de tous les éléments triés sauf du dernier
    
    {
        printf("%g, ",tab[i]);    // Affichage de tous les éléments triés sauf du dernier en utilisant le format %g pour les afficher sans les 0 par défauts
    }
    
    printf("%g",tab[size-1]);  // Affichage du dernier élément
    
    printf("]"); // Affichage du crochet de fin
}

// FONCTION SERVANT A TRIER UN TABLEAU PAR ORDRE CROISSANT


// FONCTION SERVANT A TRIER UN TABLEAU PAR ORDRE DECROISSANT

void descen(float tab[],int size)  // Nom et paramètres de la fonction
{
    int i,j;  // Déclaration des variables
    float inter;
    
    for (i = 0; i < size; i++)  // Première boucle pour le tri
    {
    
        for (j = (i+1); j < size; j++)  // Deuxième boucle pour le tri 
        
        {
            if (tab[i]<tab[j])    // Vérification de la condition
            {
                inter = tab[i];      // Interchangement de place
                tab[i] = tab[j];
                tab[j] = inter;
            }
            
        }
        
    
    }
    
    printf("[");  // Affichage du crochet du début
    
    for (i = 0; i < size-1; i++)  // Boucle pour l'affichage de tous les éléments triés sauf du dernier
    
    {
        printf("%g, ",tab[i]);    // Affichage de tous les éléments triés sauf du dernier en utilisant le format %g pour les afficher sans les 0 par défauts
    }
    
    printf("%g",tab[size-1]);  // Affichage du dernier élément
    
    printf("]"); // Affichage du crochet de fin
}

// FONCTION SERVANT A TRIER UN TABLEAU PAR ORDRE DECROISSANT


// FONCTION SERVANT A DETECTER LES MAJUSCULES DANS LES CHAINES DE CARACTERES

int upper(char tab[])  

{
    for (int i = 0; i < strlen(tab)+1; i++)  // Boucle pour parcourir le tableau de caractère
    {
        if ((tab[i]>='A') && (tab[i]<= 'Z'))    // Vérification de la condition
        {
            return 1;    // Valeur de retour
        }
        else
        {
            return 0;    // Valeur de retour
        }
        
    }
    
}

// FONCTION SERVANT A DETECTER LES MAJUSCULES DANS LES CHAINES DE CARACTERES


// FONCTION POUR TROUVER LE NOMBRE DE DIVISEURS DU NOMBRE ENTRE

int nbrfirst(int nombre)
{
    int i,compteur=0;  // Déclaration des variables et initialisation de la variable compteur
    
    for (i = 1; i <= nombre; i++)  // Boucle pour la vérification de la primoté du nombre saisie
    
    {
        if ((nombre%i) == 0)    // Calcul du reste pour vérifier si le nombre est premier
        
        {
            compteur+=1;    // Incrémentation du compteur si le nombre admet un diviseur
        }
    }
    return compteur;  // Retour de la variable au programme
}

// FONCTION POUR TROUVER LE NOMBRE DE DIVISEURS DU NOMBRE ENTRE


// FONCTIONS SERVANTS A ECRIRE LES CARACTERES SPECIAUX

char e1()    // Pour écrire "e" accent aigue
{
    return 130;
}

char e2()    // Pour écrire "e" accent grave
{
    return 138;
}

char e3()    // Pour écrire "e" accent circonflexe
{
    return 136;
}

char e4()    // Pour écrire "e" tréma
{
    return 137;
}

char a2()    // Pour écrire "a" accent grave
{
    return 133;
}

char a3()    // Pour écrire "a" accent circonflexe
{
    return 131;
}

char a4()    // Pour écrire "a" tréma
{
    return 132;
}

char u1()    // Pour écrire "u" accent aigue
{
    return 163;
}

char u2()    // Pour écrire "u" accent grave
{
    return 151;
}

char u3()    // Pour écrire "u" accent circonflexe
{
    return 151;
}

char u4()    // Pour écrire "u" tréma
{
    return 129;
}

char i3()    // Pour écrire "i" accent circonflexe
{
    return 140;
}

char i4()    // Pour écrire "i" tréma
{
    return 139;
}

char o2()    // Pour écrire "o" accent grave
{
    return 149;
}

char o3()    // Pour écrire "o" accent circonflexe
{
    return 147;
}

char o4()    // Pour écrire "o" tréma
{
    return 148;
}

// FONCTIONS SERVANTS A ECRIRE LES CARACTERES SPECIAUX


// FONCTION SERVANT A ECRIRE LES CARACTERES ET LES CHAINES DE CARACTERE EN COULEUR

void color(char clr[], char clr_select[])
{
    
    if (clr_select == "orange")
    {
        printf("\033[38;5;208m%s\033[0m",clr);  // Code ANSI de l'orange
    }
    if (clr_select == "red")
    {
        printf("\033[31m%s\033[0m",clr);  // Code ANSI du rouge
    }
    if (clr_select == "blue")
    {
        printf("\033[34m%s\033[0m",clr);  // Code ANSI du bleu
    }
    if (clr_select == "green")
    {
        printf("\033[32m%s\033[0m",clr);  // Code ANSI du vert
    }
    if (clr_select == "yellow")
    {
        printf("\033[33m%s\033[0m",clr);  // Code ANSI du jaune
    }
    if (clr_select == "magenta")
    {
        printf("\033[35m%s\033[0m",clr);  // Code ANSI du magenta
    }
    if (clr_select == "cyan")
    {
        printf("\033[36m%s\033[0m",clr);  // Code ANSI du cyan
    }
}

// FONCTION SERVANT A ECRIRE LES CARACTERES ET LES CHAINES DE CARACTERE EN COULEUR


// FONCTION SERVANT A SOULIGNER LES CHAINES DE CARACTERES

void underline(char sentence[])
{
    printf("\033[4m%s\033[0m",sentence);  // Séquence d'échappement ANSI pour souligner
}

// FONCTION SERVANT A SOULIGNER LES CHAINES DE CARACTERES


// FONCTION SERVANT A ENCADRER LES CARACTERES ET CHAINES DE CARACTERES

void frame(char sentence[],char color[])
{
    if (color == "orange")  // Vérification de la couleur entrée par l'utilisateur
    {
        for (int i = 0; i < strlen(sentence)+4; i++)    // Boucle qui parcourt la longueur de la chaine de caractère
        {
            if (i == 0) 
            {
                printf("\033[38;5;208m%c\033[0m",201);    // Affichage du sommet en haut à gauche
            }
            
            else if (i == strlen(sentence)+3)    
            {
                printf("\033[38;5;208m%c\033[0m",187);    // Affichage du sommet en haut à droite
            }
            
            else
            {
                printf("\033[38;5;208m%c\033[0m",205);    // Affichage des lignes du milieu
            }
        }
        
        printf("\n");
        
        printf("\033[38;5;208m%c\033[0m",186);    // Affichage de la ligne du côté gauche
        
        printf(" ");    
        
        printf("%s",sentence);    // Afficage de la chaine de caractère
        
        printf(" ");
        
        printf("\033[38;5;208m%c\033[0m",186);    // Affichage de la ligne du côté droit
        
        printf("\n");
        
        for (int i = 0; i < strlen(sentence)+4; i++)    // Boucle qui parcourt la longueur de la chaine de caractère
        {
            if (i == 0)
            {
                printf("\033[38;5;208m%c\033[0m",200);    // Affichage du sommet en bas à gauche
            }
            
            else if (i == strlen(sentence)+3)
            {
                printf("\033[38;5;208m%c\033[0m",188);    // Affichage du sommet en bas à droite
            }
            
            else
            {
                printf("\033[38;5;208m%c\033[0m",205);    // Affichage des lignes du milieu
            }
        }
    }
    if (color == "magenta")  // Vérification de la couleur entrée par l'utilisateur
    {
        for (int i = 0; i < strlen(sentence)+4; i++)
        {
            if (i == 0)
            {
                printf("\033[35m%c\033[0m",201);
            }
            else if (i == strlen(sentence)+3)
            {
                printf("\033[35m%c\033[0m",187);
            }
            else
            {
                printf("\033[35m%c\033[0m",205);
            }
        }
        printf("\n");
        printf("\033[35m%c\033[0m",186);
        printf(" ");
        printf("%s",sentence);
        printf(" ");
        printf("\033[35m%c\033[0m",186);
        printf("\n");
        for (int i = 0; i < strlen(sentence)+4; i++)
        {
            if (i == 0)
            {
                printf("\033[35m%c\033[0m",200);
            }
            else if (i == strlen(sentence)+3)
            {
                printf("\033[35m%c\033[0m",188);
            }
            else
            {
                printf("\033[35m%c\033[0m",205);
            }
        }
    }
    if (color == "green")  // Vérification de la couleur entrée par l'utilisateur
    {
        for (int i = 0; i < strlen(sentence)+4; i++)
        {
            if (i == 0)
            {
                printf("\033[32m%c\033[0m",201);
            }
            else if (i == strlen(sentence)+3)
            {
                printf("\033[32m%c\033[0m",187);
            }
            else
            {
                printf("\033[32m%c\033[0m",205);
            }
        }
        printf("\n");
        printf("\033[32m%c\033[0m",186);
        printf(" ");
        printf("%s",sentence);
        printf(" ");
        printf("\033[32m%c\033[0m",186);
        printf("\n");
        for (int i = 0; i < strlen(sentence)+4; i++)
        {
            if (i == 0)
            {
                printf("\033[32m%c\033[0m",200);
            }
            else if (i == strlen(sentence)+3)
            {
                printf("\033[32m%c\033[0m",188);
            }
            else
            {
                printf("\033[32m%c\033[0m",205);
            }
        }
    }
    if (color == "cyan")  // Vérification de la couleur entrée par l'utilisateur
    {
        for (int i = 0; i < strlen(sentence)+4; i++)
        {
            if (i == 0)
            {
                printf("\033[36m%c\033[0m",201);
            }
            else if (i == strlen(sentence)+3)
            {
                printf("\033[36m%c\033[0m",187);
            }
            else
            {
                printf("\033[36m%c\033[0m",205);
            }
        }
        printf("\n");
        printf("\033[36m%c\033[0m",186);
        printf(" ");
        printf("%s",sentence);
        printf(" ");
        printf("\033[36m%c\033[0m",186);
        printf("\n");
        for (int i = 0; i < strlen(sentence)+4; i++)
        {
            if (i == 0)
            {
                printf("\033[36m%c\033[0m",200);
            }
            else if (i == strlen(sentence)+3)
            {
                printf("\033[36m%c\033[0m",188);
            }
            else
            {
                printf("\033[36m%c\033[0m",205);
            }
        }
    }
    if (color == "red")  // Vérification de la couleur entrée par l'utilisateur
    {
        for (int i = 0; i < strlen(sentence)+4; i++)
        {
            if (i == 0)
            {
                printf("\033[31m%c\033[0m",201);
            }
            else if (i == strlen(sentence)+3)
            {
                printf("\033[31m%c\033[0m",187);
            }
            else
            {
                printf("\033[31m%c\033[0m",205);
            }
        }
        printf("\n");
        printf("\033[31m%c\033[0m",186);
        printf(" ");
        printf("%s",sentence);
        printf(" ");
        printf("\033[31m%c\033[0m",186);
        printf("\n");
        for (int i = 0; i < strlen(sentence)+4; i++)
        {
            if (i == 0)
            {
                printf("\033[31m%c\033[0m",200);
            }
            else if (i == strlen(sentence)+3)
            {
                printf("\033[31m%c\033[0m",188);
            }
            else
            {
                printf("\033[31m%c\033[0m",205);
            }
        }
    }
    if (color == "blue")  // Vérification de la couleur entrée par l'utilisateur
    {
        for (int i = 0; i < strlen(sentence)+4; i++)
        {
            if (i == 0)
            {
                printf("\033[34m%c\033[0m",201);
            }
            else if (i == strlen(sentence)+3)
            {
                printf("\033[34m%c\033[0m",187);
            }
            else
            {
                printf("\033[34m%c\033[0m",205);
            }
        }
        printf("\n");
        printf("\033[34m%c\033[0m",186);
        printf(" ");
        printf("%s",sentence);
        printf(" ");
        printf("\033[34m%c\033[0m",186);
        printf("\n");
        for (int i = 0; i < strlen(sentence)+4; i++)
        {
            if (i == 0)
            {
                printf("\033[34m%c\033[0m",200);
            }
            else if (i == strlen(sentence)+3)
            {
                printf("\033[34m%c\033[0m",188);
            }
            else
            {
                printf("\033[34m%c\033[0m",205);
            }
        }
    }
    if (color == "yellow")  // Vérification de la couleur entrée par l'utilisateur
    {
        for (int i = 0; i < strlen(sentence)+4; i++)
        {
            if (i == 0)
            {
                printf("\033[33m%c\033[0m",201);
            }
            else if (i == strlen(sentence)+3)
            {
                printf("\033[33m%c\033[0m",187);
            }
            else
            {
                printf("\033[33m%c\033[0m",205);
            }
        }
        printf("\n");
        printf("\033[33m%c\033[0m",186);
        printf(" ");
        printf("%s",sentence);
        printf(" ");
        printf("\033[33m%c\033[0m",186);
        printf("\n");
        for (int i = 0; i < strlen(sentence)+4; i++)
        {
            if (i == 0)
            {
                printf("\033[33m%c\033[0m",200);
            }
            else if (i == strlen(sentence)+3)
            {
                printf("\033[33m%c\033[0m",188);
            }
            else
            {
                printf("\033[33m%c\033[0m",205);
            }
        }
    }
    if (color == "white")
    {
        for (int i = 0; i < strlen(sentence)+4; i++)
        {
            if (i == 0)
            {
                printf("%c",201);
            }
            else if (i == strlen(sentence)+3)
            {
                printf("%c",187);
            }
            
            else
            {
                printf("%c",205);
            }
        }
        printf("\n");
        printf("%c",186);
        printf(" ");
        printf("%s",sentence);
        printf(" ");
        printf("%c",186);
        printf("\n");
        for (int i = 0; i < strlen(sentence)+4; i++)
        {
            if (i == 0)
            {
                printf("%c",200);
            }
            else if (i == strlen(sentence)+3)
            {
                printf("%c",188);
            }
            
            else
            {
                printf("%c",205);
            }
        }
    }
}

// FONCTION SERVANT A ENCADRER LES CARACTERES ET CHAINES DE CARACTERES


// FONCTION SERVANT A AFFICHER UN MESSAGE CLIGNOTANT

void repeat(char sentence[], float time)
{
    while (!kbhit())  // Répétition du message d'arrêt ou de reprise jusqu'à ce qu'une touche soit tapée
    
    {
        printf("  %s\r",sentence);    // Affichage du message d'arrêt ou de reprise
        
        sleep(time);    // Temps de latence
        
        for (int i = 0; i < strlen(sentence)+3; i++)
        {
            printf(" ");    // Affichage des espaces en remplacement du message
        }
        
        printf("\r");    // Suppression de la ligne d'avant
        
        sleep(time);    // Temps de latence
    }
}

// FONCTION SERVANT A AFFICHER UN MESSAGE CLIGNOTANT


// FONCTION SERVANT A AFFICHER UNE CHAINE DE CARACTERES DE MANIERE SEQUENTIELLE

void obo(char sentence[],float time)
{
    for (int i = 0; i < strlen(sentence)+1; i++)  // Boucle qui parcourt toute la chaine de caractere
    {
        printf("%c",sentence[i]);    // Affichage du caractère
        
        sleep(time);    // Temps de latence
    }
    
}

// FONCTION SERVANT A AFFICHER UNE CHAINE DE CARACTERES DE MANIERE SEQUENTIELLE


/* 
    ┌─────────────────────────────────────┐
    │ espacement inter-fonction: 2 lignes │
    └─────────────────────────────────────┘
 */

/* 
    ┌────────────────────────────────────────────────────┐
    │ email: ebokameff@gmail.com / ethaniraqui@gmail.com │
    └────────────────────────────────────────────────────┘
 */

/* 
    ┌──────────────────────────┐
    │ phone number: 0757550318 │
    └──────────────────────────┘
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <joanna.h>
#include <marco.h>
#include <unistd.h>
//fonction pour voir si la reponse est en mujuscule
int estMajuscule(const char *reponse) {
    while (*reponse) {
        if (!isupper(*reponse)) {
            return 0;// La chaîne contient au moins un caractère non majuscule
        }
        reponse++;
    }
    return 1;// La chaîne est entièrement en majuscules
}
//fonction pour les reponses de l'ordinateur
void reponses(char *question){
    if (strstr(question, "bonjour") != NULL || strstr(question, "salut") != NULL || strstr(question, "hello") != NULL)
    {
        printf("Kouakou: Bonjour! Comment puis-je vous aider aujourd'hui?\n");
        printf("\n");
    }
    else if (strstr(question, "comment ca va") != NULL)
    {
        printf("Kouakou: En tant qu'intelligence artificielle, je n'ai pas de sensations ou d'%cmotions\n", e1());
        printf("\n");
    }
    else if (strstr(question, "ton nom")!= NULL)
    {
        printf("Kouakou: Je suis Kouakou, un ChatBot d%cvelopp%c par Eloge Kohou.\n", e1(), e1());
        printf("\n");
    }
    else if (strstr(question, "temps") != NULL)
    {
        printf("Kouakou: Je suis d%csol%c, mais je ne suis pas capable de fournir des informations en temps r%cel\n", e1(), e1(), e1());
        printf("\n");
    }
    else if (strstr(question, "blague")!= NULL)
    {
        printf("Kouakou: Pourquoi les plongeurs plongent-ils toujours en arri%cre et jamais en avant ?\n", e2());
        printf("Kouakou: Parce que sinon ils tombent dans le bateau !\n");
        printf("\n");
    }
    else if (strstr(question, "film") != NULL)
    {
        printf("Kouakou: En tant que ChatBot, je n'ai pas de pr%cf%crences personnelles\n", e1(), e1());
        printf("\n");
    }
    else if (strstr(question, "projet") != NULL)
    {
        printf("Kouakou: mon projet est de devenir une grange IA\n");
        printf("\n");
    }
    else if (strstr(question, "voyage") != NULL)
    {
        printf("Kouakou: J'ai bien envie de d%ccouvir la cilicone valley\n", e1());
        printf("\n");
    }
    else if (strstr(question, "nourriture") != NULL || strstr(question, "plat") != NULL)
    {
        printf("Kouakou: Mdr! En tant que ChatBot, je n'ai pas de nourriture pr%cf%cr%ce\n", e1(), e1(), e1());
        printf("\n");
    }
    else if (strstr(question, "je vais bien") != NULL || strstr(question, "je vais bien et toi") != NULL)
    {
        printf("Kouakou: C'est g%cnial à entendre !\n", e1());
        printf("\n");
    }
    else if (strstr(question, "ca va") != NULL)
    {
        printf("Kouakou: OK\n");
        printf("\n");
    }
    else if (strstr(question, "age") != NULL)
    {
        printf("Kouakou: Demandee cela a mon concepteur\n");
        printf("\n");
    }
    else if (strstr(question, "question") != NULL)
    {
        printf("Kouakou: Absolument ! Je suis pr%ct à r%cpondre %c vos questions.\n", e3(), e1(), a2());
        printf("\n");
    }
    else if (strstr(question, "amoureux") != NULL)
    {
        printf("Kouakou: Je ne connais rien a l'amour d%csole\n", e1());
        printf("\n");
    }
    else if (strstr(question, "musique\n") != NULL)
    {
        printf("Kouakou: j'aime bien la musique gospel");
        printf("\n");
    }
    else if (strstr(question, "c'est ou\n") != NULL)
    {
        printf("Kouakou: Essaye de regarder sur une apli de localisation");
        printf("\n");
    }
    else if (strstr(question, "tu fais quoi\n"))
    {
        printf("Kouakou: Je suis l%c pour vous aider !", a2());
        printf("\n");
    }
    else if (strstr(question, "comment tu fonctionnes") != NULL || strstr(question, "comment tu marches") != NULL)
    {
        printf("Kouakou: Mon fonctionnement repose sur un réseau de neurones artificiels aliment%c par de vastes quantit%cs de donn%ces textuelles\n", e1(), e1(), e1());
        printf("\n");
    }
    else if (strstr(question, "capacites") != NULL)
    {
        printf("Kouakou: j'ai des capacit%cs tres limit%cs pour le moment\n", e1(), e1());
        printf("\n");
    }
    else if (strstr(question, "autre chose"))
    {
        printf("Kouakou: ça depend de toi\n");
        printf("\n");
    }
    else if (strstr(question, "ton histoire") != NULL)
    {
        printf("Kouakou: je l'ai d%cja raconter\n", e1());
        printf("\n");
    }
    else if (strstr(question, "ta programmation") != NULL)
    {
        printf("Kouakou: J'ai %ct%c fait en C\n", e1(), e1());
        printf("\n");
    }
    else if (strstr(question, "tu peux m'aider") != NULL)
    {
        printf("Kouakou: Bien sur, je suis l%c pour vous aider !\n", a2());
        printf("\n");
    }
    else if (strstr(question, "pourquoi tu es ici") != NULL)
    {
        printf("Kouakou: je suis l%c pour vous aider\n", a2());
        printf("\n");
    }
    else if (strstr(question, " tes hobbies") != NULL)
    {
        printf("Kouakou: Repondre aux gens\n");
        printf("\n");
    }
    else if (strstr(question, "tu aimes la musique"))
    {
        printf("Kouakou: OUI\n");
        printf("\n");
    }
    else if (strstr(question, "livre") != NULL || strstr(question, "livres") != NULL)
    {
        printf("Kouakou: J'aime beaucoup p%cre riche pere pauvre\n", e2());
        printf("\n");
    }
    else if (strstr(question, "ton sport prefere"))
    {
        printf("Kouakou: Je ne peux pas faire de sport\n");
        printf("\n");
    }
    else if (strstr(question, "langues") != NULL || strstr(question, "langue") != NULL)
    {
        printf("Kouakou: je parle français\n");
        printf("\n");
    }
    else if (strstr(question, "tes passe temps") != NULL)
    {
        printf("Kouakou: Repondre aux gens\n");
        printf("\n");
    }
    else if (strstr(question, "ok\n") != NULL)
    {
        printf("Kouakou: D'accord\n");
        printf("\n");
    }
    else if (strstr(question, "je peux faire quoi aujourd'hui") != NULL)
    {
        printf("Kouakou: Je sais pas essaie de voir ton programme\n");
        printf("\n");
    }
    else if (strstr(question, "mieux dormir") != NULL)
    {
        printf("Essaie d'ecouter de la musique en fermant les yeux");
        printf("\n");
    }
    else if (strstr(question, "rester motive") != NULL)
    {
        printf("Essaie de visualiser ton futur si tu y arrives");
        printf("\n");
    }
    else if (strstr(question, "rester en bonne sante") != NULL)
    {
        printf("Essaie de respecter ton alimentation");
        printf("\n");
    }
    else if (strstr(question, "gérer mon temps efficacement") != NULL)
    {
        printf("Organise ton emploi du temps perso et de l'ecole");
        printf("\n");
    }
    else if (strstr(question, "ok") != NULL)
    {
        printf("Kouakou: D'autres questions?\n");
        printf("\n");
    }
    else if (strstr(question, "je vois") != NULL || strstr(question, "aok") != NULL)
    {
        printf("Kouakou: tu comprends mieux maintenant\n");
        printf("\n");
    }
    else if (strstr(question, "oui") != NULL)
    {
        printf("Kouakou: continuons\n");
        printf("\n");
    }
    else if (strstr(question, "non") != NULL)
    {
        printf("Kouakou: continuons\n");
        printf("\n");
    }
    else if (strstr(question, "quoi") != NULL)
    {
        printf("Kouakou: j'en d%cduis que vous ne comprenez pas\n", e1());
        printf("\n");
    }
    else if (strstr(question, "tu me connais") != NULL)
    {
        printf("Kouakou: non pas vraiment\n");
        printf("\n");
    }
    else if (strstr(question, "c'est mechant") != NULL)
    {
        printf("Kouakou: D%csole alors!\n", e1());
        printf("\n");
    }
    else if (strstr(question, "les elections") != NULL)
    {
        printf("Kouakou: Laissons cette affaire la stp!\n", e1());
        printf("\n");
    }
    else if (strstr(question, "ayi") != NULL)
    {
        printf("oui oui\n", e1());
        printf("\n");
    }
    else if (strstr(question, "connais joanna") != NULL)
    {
        printf("Kouakou: oui\n", e1());
        printf("\n");
    }
    else if (strstr(question, "c'est qui joanna") != NULL)
    {
        printf("Kouakou: c'est la meuf a ethan\n", e1());
        printf("\n");
    }
    else if (strstr(question, "d'accord") != NULL)
    {
        printf("Kouakou: c'est mieux!\n", e1());
        printf("\n");
    }
    else if (strstr(question, "la technologie") != NULL)
    {
        printf("Kouakou: c'est l'intelligence artificielle\n");
        printf("\n");
    }
    else if (strstr(question, "l'intelligence artificielle") != NULL)
    {
        printf("Kouakou: L'intelligence artificielle est un ensemble de th%cories et de techniques visant %c r%caliser des machines capables de simuler l'intelligence humaine\n", e1(), a4(), e1());
        printf("\n");
    }
    else{
        printf("\033[31mKouakou: Pas de reponse,Reformuler votre question\033[0m\n");
        printf("\n");
    }
}

int main(){
    /*Declaration des variables*/
    int choix;
    int nombre;
    int mentalisme;
    int age;
    char nom[10];
    char reponse[10];
    char oui[4] = "oui";
    char non[4] = "non";
    do
    {
    /*Menu pour les choix de l'utulisateur*/
    color("\033[1m***MENU***\033[0m\n","red");
    printf("1-Je veux que ");color("Kouakou", "yellow");printf(" devine le nombre dans ma t%cte\n", e3());
    printf("2-Je veux deviner le nombre de kouakou\n");
    printf("3-Je veux discuter avec");color(" Kouakou\n", "yellow");
    printf("Votre Reponse: ");
    scanf("%d", &choix);
    printf("\n");
    printf("\n");    
    /*L'utulisateur choisi le numero 1*/
    if (choix == 1)
    {
    printf("Bienvenue dans L'intelligence artificielle ");color("Kouakou ", "yellow");printf("( Version 1.0 )");
    printf("\n");
    printf("\n");
    printf("Actuellement,", a3());color(" Kouakou ", "yellow");printf("n'est pas capable de r%caliser de grandes t%cches.\n", e1(), a4());
    printf("\n");
    printf("La prochaine version sera am%clior%ce!!\n", e1(), e1());
    printf("\n");
    printf("Tu veux connaitre l'histoire de la cr%cation de ", e1());color("Kouakou\n", "yellow");
    printf("\n");
    printf("Tu dois repondre par oui ou par non: ");
    scanf("%s", reponse);
    printf("\n");
    if (estMajuscule(reponse))
    {
        printf("\033[31mErreur le mot est en majuscule: \033[0m");
        scanf("%s", reponse);
    }
    
    if (strcmp(reponse, "oui") == 0)
    {
        color("\033[1m***VOICI L'HISTOIRE DE LA CREATION DE ","red");color("KOUAKOU***\033[0m\n", "yellow");
        printf("\n");
        printf("Suite au module de langage C de L'IUA j'ai\n");
        printf("\n");
        printf("J'ai d%ccid%c de commencer un projet personnel afin d'am%cliorer mes comp%ctences dans ce langage.\n", e1(), e1(), e1(), e1());
        printf("\n");
        color("\033[1m***PLACE AU JEU***\033[0m\n","red");
        printf("\n");
        printf("Salut je suis ");color("Kouakou ", "yellow");printf("mais tu connais d%cja mon nom, et le tiens c'est quoi?: ", e1());
        scanf("%s", nom);
        printf("\n");
        printf("Bonjour/Bonsoir %s\n", nom);
        printf("\n");
        printf("Je peux aussi connaitre ton age?: ");
        scanf("%d", &age);
        printf("\n");
        printf("\033[35mton nom est %s et tu as %d ans\033[0m\n", nom, age);
        printf("\n");
        printf("Avec ces deux informations, je tiens %c te dire que j'ai r%cussi %c entrer dans ta t%cte.\n", a3(), e1(), a3(), e3());
        printf("\n");
        printf("Tu vas maintenant suivre mes instructions");
        printf("\n");
        printf("\n");
        printf("-Choisis un nombre entre 1 et 10\n");
        sleep(30);
        printf("\n");
        printf("-Multiplie le nombre que tu as choisi par 2\n");
        sleep(15);
        printf("\n");
        printf("-Ajoute un nombre quelconque: ");
        scanf("%d", &nombre);
        sleep(15);
        printf("\n");
        printf("-Fait la somme et divise le tout par 2\n");
        sleep(15);
        printf("\n");
        printf("-Soustrait ton nombre de d%cpart dans le r%csultat de la division par deux\n", e1(), e1());
        sleep(15);
        printf("\n");
        mentalisme = nombre / 2;
        printf("NB: prenez seullement la partie enti%cre pour plus de coh%crence\n", e2(), e1());
        sleep(15);
        printf("\n");
        color("Kouakou \033[0m", "yellow");printf("est entrain de r%cfflechir...\n", e1());
        sleep(25);
        printf("\n");
        printf("\033[32m! Le nombre que tu as dans la t%cte est %d !\033[0m\n", e3(),mentalisme);
        printf("\n");
    }
    else if (strcmp(reponse, "non") == 0)
    {
        color("\033[1m***PLACE AU JEU***\033[0m\n","red");
        printf("\n");
        printf("Salut je suis ");color("Kouakou ", "yellow");printf("mais tu connais d%cja mon nom, et le tiens c'est quoi?: ", e1());
        scanf("%s", nom);
        printf("\n");
        printf("Bonjour/Bonsoir %s\n", nom);
        printf("\n");
        printf("Je peux aussi connaitre ton age?: ");
        scanf("%d", &age);
        printf("\n");
        printf("\033[35mton nom est %s et tu as %d ans\033[0m\n", nom, age);
        printf("\n");
        printf("Avec ces deux informations, je tiens %c te dire que j'ai r%cussi %c entrer dans ta t%cte.\n", a3(), e1(), a3(), e3());
        printf("\n");
        printf("Tu vas maintenant suivre mes instructions");
        printf("\n");
        printf("\n");
        printf("-Choisis un nombre entre 1 et 10\n");
        sleep(30);
        printf("\n");
        printf("-Multiplie le nombre que tu as choisi par 2\n");
        sleep(15);
        printf("\n");
        printf("-Ajoute un nombre quelconque: ");
        scanf("%d", &nombre);
        sleep(15);
        printf("\n");
        printf("-Fait la somme et divise le tout par 2\n");
        sleep(15);
        printf("\n");
        printf("-Soustrait ton nombre de d%cpart dans le r%csultat de la division par deux\n", e1(), e1());
        sleep(15);
        printf("\n");
        mentalisme = nombre / 2;
        printf("NB: prenez seullement la partie enti%cre pour plus de coh%crence\n", e2(), e1());
        sleep(15);
        printf("\n");
        color("Kouakou \033[0m", "yellow");printf("est entrain de r%cfflechir...\n", e1());
        sleep(25);
        printf("\n");
        printf("\033[32m! Le nombre que tu as dans la t%cte est %d !\033[0m \n", e3(),mentalisme);
        printf("\n");
        printf("\n");
    }
    }
    /*L'utulisateur choisi le nuemero 2*/
    else if (choix == 2)
    {
    printf("Bienvenue dans L'intelligence artificielle ");color("Kouakou ", "yellow");printf("( Version 1.0 )\n");
    printf("\n");
    printf("Actuellement,");color(" Kouakou ", "yellow");printf("n'est pas capable de r%caliser de grandes t%cches.\n", e1(), a4());
    printf("\n");
    printf("La prochaine version sera am%clior%ce!!\n", e1(), e1());
    printf("\n");
    printf("Tu veux connaitre l'histoire de la cr%cation de ", e1());color("Kouakou\n", "yellow");
    printf("\n");
    printf("Tu dois repondre par oui ou par non: ");
    scanf("%s", reponse);
    printf("\n");
    if (estMajuscule(reponse))
    {
        printf("\033[31mErreur le mot est en majuscule: \033[0m");
        scanf("%s", reponse);
    }
    
    if (strcmp(reponse, "oui") == 0)
    {
        int est_correct = 0;
        int nbr_tentative = 0;
        int nombre_entre;
        int nombre_aleatoire = 0;
        const int MAX = 100, MIN = 1;
        srand(time(NULL));
        nombre_aleatoire = (rand() % (MAX - MIN + 1)) + MIN;/*Pour que l'ordinateur puisse choisir un nombre aleatoire*/
        color("\033[1m***VOICI L'HISTOIRE DE LA CREATION DE ","red");color("KOUAKOU***\033[0m\n", "yellow");
        printf("\n");
        printf("Suite au module de langage C de L'IUA j'ai\n");
        printf("\n");
        printf("J'ai décid%c de commencer un projet personnel afin d'am%cliorer mes comp%ctences dans ce langage.\n", e1(), e1(), e1());
        printf("\n");
        color("\033[1m***PLACE AU JEU***\033[0m\n","red");
        printf("\n");
        printf("L'objectif est de deviner un nombre choisi au hasard par l'ordinateur.\n");
        printf("\n");
        printf("en seullement 7 tentatives\n");
        printf("\n");
        printf("Vous devez deviner le nombre choisi par l'ordinateur, qui se situe entre 1 et 100.\n");
        printf("\n");
        do
        {
            nbr_tentative++;
            printf("Quel est ce nombre?: ");
            scanf("%d", &nombre_entre);
            printf("\n");
            if (nombre_aleatoire > nombre_entre)
            {
                printf("\033[34mC'est plus!\033[0m\n");
                printf("\n");
            }
            else if (nombre_aleatoire < nombre_entre)
            {
                printf("\033[34mC'est moins!\033[0m\n");
                printf("\n");
            }
            else{
                est_correct = 1;
                break;
            }
        } while (nbr_tentative < 7);
        if (est_correct == 1)
        {
            printf("\033[32mBravo! vous avez trouver %d en %d tentatives\033[0m\n", nombre_aleatoire, nbr_tentative);
            printf("\n");
        }
        else printf("\033[31mYako! Mais le nombre etait %d\033[0m\n", nombre_aleatoire);
        printf("\n");
        
    }
    else if (strcmp(reponse, "non") == 0)
    {
        int est_correct = 0;
        int nbr_tentative = 0;
        int nombre_entre;
        int nombre_aleatoire = 0;
        const int MAX = 100, MIN = 1;
        srand(time(NULL));
        nombre_aleatoire = (rand() % (MAX - MIN +1)) + MIN;/*Pour que l'ordinateur puisse choisir un nombre aleatoire*/
        color("\033[1m***PLACE AU JEU***\033[0m\n","red");
        printf("\n");
        printf("L'objectif est de deviner un nombre choisi au hasard par l'ordinateur.\n");
        printf("\n");
        printf("en seullement 7 tentatives\n");
        printf("\n");
        printf("Vous devez deviner le nombre choisi par l'ordinateur, qui se situe entre 1 et 100.\n");
        printf("\n");
        do
        {
            nbr_tentative++;
            printf("Quel est ce nombre?: ");
            scanf("%d", &nombre_entre);
            printf("\n");
            if (nombre_aleatoire > nombre_entre)
            {
                printf("\033[34mC'est plus!\033[0m\n");
                printf("\n");
            }
            else if (nombre_aleatoire < nombre_entre)
            {
                printf("\033[34mC'est moins!\033[0m\n");
                printf("\n");
            }
            else{
                est_correct = 1;
                break;
            }
        } while (nbr_tentative < 7);
        if (est_correct == 1)
        {
            printf("\033[32mBravo! vous avez trouver %d en %d tentatives\033[0m\n", nombre_aleatoire, nbr_tentative);
            printf("\n");
        }
        else printf("\033[31mYako! Mais le nombre etait %d\033[0m\n", nombre_aleatoire);
        printf("\n");
    }
    }
    /*L'utulisateur choisi le numero 3*/
else if (choix == 3)
    {
    printf("Bienvenue dans L'intelligence artificielle ");color("Kouakou ", "yellow");printf("( Version 1.0 )\n");
    printf("\n");
    printf("Actuellement,");color(" Kouakou ", "yellow");printf("n'est pas capable de r%caliser de grandes t%cches.\n", e1(), a4());
    printf("\n");
    printf("La prochaine version sera am%clior%ce!!\n", e1(), e1());
    printf("\n");
    printf("Tu veux connaitre l'histoire de la cr%cation de ", e1());color("Kouakou\n", "yellow");
    printf("\n");
    printf("Tu dois repondre par oui ou par non: ");
    scanf("%s", reponse);
    printf("\n");
    if (estMajuscule(reponse))
    {
        printf("\033[31mErreur le mot est en majuscule: \033[0m");
        scanf("%s", reponse);
    }
    
    if (strcmp(reponse, "oui") == 0)
    {
        char question[100];
        char noms[10];
        color("\033[1m***VOICI L'HISTOIRE DE LA CREATION DE ","red");color("KOUAKOU***\033[0m\n", "yellow");
        printf("\n");
        printf("Suite au module de langage C de L'IUA j'ai\n");
        printf("\n");
        printf("J'ai d%ccid%c de commencer un projet personnel afin d'am%cliorer mes comp%ctences dans ce langage.\n", e1(), e1(), e1(), e1());
        printf("\n");
        printf("C'est quoi ton nom: ");
        scanf("%s", noms);
        printf("\n");
        printf("Kouakou: Bonjour %s je peux faire quoi pour toi\n", noms);
        printf("\n");
        printf("NB: il est pr%cf%crable de dire bonjour en retour a kouakou\n", e1(), e1());
        printf("\n");
        while (1)
        {
            printf("%s: ", noms);
            fgets(question, sizeof(question), stdin);
            question[strcspn(question, "\n")] = '\0';/*Supprimer le saut de ligne*/
            printf("\n");
            /*Verifier si l'utulisateur veut quitter*/
            if (strcmp(question, "quitter") == 0)
            {
                printf("Au revoir! A bientot!\n");
                break;
            } 
            /*Repondre a la question de l'utulisateur*/
            reponses(question);
        }
    }
    else if (strcmp(reponse, "non") == 0)
    {
        char question[150];
        char noms[10];
        printf("C'est quoi ton nom: ");
        scanf("%s", noms);
        printf("\n");
        printf("Kouakou: Bonjour %s je peux faire quoi pour toi\n", noms);
        printf("\n");
        printf("NB: il est pr%cf%crable de dire bonjour en retour a kouakou\n", e1(), e1());
        printf("\n");
        while (1)
        {
            printf("%s: ", noms);
            fgets(question, sizeof(question), stdin);
            question[strcspn(question, "\n")] = '\0';/*Supprimer le saut de ligne*/
            printf("\n");
            /*Verifier si l'utulisateur veut quitter*/
            if (strcmp(question, "quitter") == 0)
            {
                printf("Au revoir! A bientot\n");
                printf("\n");
                break;
            }
            /*Repondre a la question de l'utulisateur*/
            reponses(question);
        }
    }
    }
    } while (choix == 1 || choix == 2 || choix == 3);
    
    return 0;
    
}

/* 

CONTACTS

NOM : ELOGE

PRENOM: KOHOU

EMAIL: angeeloge8@gmail.com

*/
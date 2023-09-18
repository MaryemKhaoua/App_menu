#include <stdio.h>
#include <string.h>
#define MAX_WORDS 200
#define MAX_WORD_LENGTH 70

int i, count = 0;
char words[MAX_WORDS][MAX_WORD_LENGTH];
char word[MAX_WORD_LENGTH];

void aff_data()
{
        printf("les donnees: \n");
        for (i = 0; i < count; i++)

                printf("%d: %s\n", i + 1, words[i]);
}
void add_data()
{
    if (count >= MAX_WORDS) {
        printf("Impossible d'ajouter plus de mots, la liste est pleine\n");
        return;
    }

    printf("ajouter un mot: ");
    scanf("%s", words[count]);
    count++;
    printf("word ajoute avec succes\n");
}
void search_data()
{

	printf("enter a word to search for :  \n");
	scanf("%s", word);

	for (i = 0; i < count; i++)
	{
		if (strcmp(words[i], word) == 0)
        {
             printf("votre mot se trouve ici %d: \n", i + 1);
             return;
        } 
    }
		
           
		
			printf("mot introuvable ici \n");
	}
    void del_data()
    {
        
    }
int main()
{
    int choix;
  while(1) 
    {
    printf("==================================================================================\n");
    printf("                                Menu d'application\n");                                          
    printf("==================================================================================\n");
    printf("[1] afficher les donnees\n");
    printf("[2] ajouter une donnee\n");
    printf("[3] rechercher sur une donn%Ce\n", 130);
    printf("[4] supprimer une donn%Ce\n", 130);
    printf("[5] supprimer les donn%Ces r%Cp%Ctes\n", 130, 130, 138);
    printf("[6] g%Cn%Cre le wordlist\n", 130, 138);
    printf("[7] quitter\n");
    printf("==================================================================================\n");
    printf("Entrer votre choix: ");
    scanf("%d", &choix);


    switch (choix)
    {
        case 1: aff_data();
break;
	case 2: add_data();
break;
    case 3: search_data();
break;
    }
    }
    return (0);
}
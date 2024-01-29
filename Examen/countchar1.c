#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>



int count_char(char *chaine, char caractere) {
	int count = 0;
   	while (*chaine != '\0') {
	if (*chaine == caractere) {
		count++;
        }
	chaine++;
    }
	return count;
}

int main() {
	char *chaine;
	printf("Votre texte: %s", chaine);
	scanf("%s\n", &chaine);
	char caractere;
	printf("Choisisez votre caractere: %c", caractere);
	scanf("%c\n", &caractere);
	int resultat = count_char(chaine, caractere);
	printf("Le caractere '%c' apparait %d fois dans la chaine.\n", caractere, resultat);

	exit(0);
}

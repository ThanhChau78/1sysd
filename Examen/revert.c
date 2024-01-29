#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(int argc, char *argv[]) {
	char texte;
	scanf("%s", &texte);
	printf("Votre texte: %s", texte);
	for (int i = argc - 1; i > 0; i--) {
	printf("%s ", argv[i]);
        }
	printf("\n");
 exit(0);
}

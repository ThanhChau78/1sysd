#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
	int found = 0, secret, guess, n = 0;

	srand(time(NULL));
	secret = rand() % 100 + 1;

	printf("J'ai choisi un nombre entre 1 et 100.\n");

	while (! found) {
		printf("Votre choix : \n");
		scanf("%d", &guess);
		n++;
		if (guess < secret){
			printf("Plus grand.\n");
		} else if (guess > secret){
			printf("Plus petit.\n");
		} else {
			printf("Trouve ! En %d coups.\n", n);
			found = 1;
		}
	}

	exit(0);
}

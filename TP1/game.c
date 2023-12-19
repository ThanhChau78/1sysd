#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
	int secret, guess;

	srand(time(NULL));

	secret = rand() % 10 + 1;

	printf("J'ai choisi un nombre entre 1 et 10\n");
	printf("Votre proposition ?");
	scanf("%d", &guess);
	if (guess < secret) {
		printf("Plus grand !\n");
	} else if (guess > secret) {
		printf("Plus petir !\n");
	} else {
		printf("Trouve !\n");
	}
	printf("C'etait %d\n", secret);
	exit(0);

}

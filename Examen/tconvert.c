#include<stdio.h>
#include<stdlib.h>


float celsius2fahrenheit(float f){
	float c, f;
	scanf("%fl %fl", &c, &f);
	f = (9/5) * c + 32;
	printf("La température en degrés Fahrenheit est: %fl", f)
	return f;
	}

float fahrenheit2celsius(float c){
	float f, c;
	scanf("%fl %fl",&f,&c);
	c = (f - 32)*5/9;
	printf("La température en degrés Celsius est: %fl", c);
	return c;
	}

int main(){
	int choix;
	float f,c;
	scanf("%d", &choix);
	scanf("%fl %fl", &f, &c);
	printf("1.Vous souhaiter convertir de °C à °F ?\n");
	printf("2.Vous souhaiter convertir de °F à °C ?\n");
	printf("Vous chossisez entre 1 et 2.\n");
	if (choix == 1){
	printf("Entrez le temperature: %fl\n",c);
	printf(celsius2fahrenheit(float f));
	}
	else{
	printf("Entrez le temperature: %fl\n",f);
	printf(fahrenheit2celsius(float c));
	}
exit(0);
}

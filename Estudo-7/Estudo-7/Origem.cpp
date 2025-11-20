#include<stdio.h>
#include<stdlib.h>

typedef struct {
	int idade;
}PESSOA;

int main() {
	PESSOA person;
	person.idade = 18;
	printf("Idade: %d\n", person.idade);
	int* p = &person.idade;
	*p = 12;
	printf("Idade alterada: %d", person.idade);
}
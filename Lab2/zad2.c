#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_LENGHT (50)
#define NO_PERSON_FOUND(NULL)
#define EMPTY_LIST(-1)
#define NO_PERSON_FOUND_INT(-2)
#define SINGLE_PERSON(-3)


//za dodavanje nove osobe
//newPerson->next = head->next; ("head->next" nan pokazuje na tu novu osobu)
//head->next = newPerson;
//head->next ne smi ic prvi jer ce se izgubit adresa onog koji je prije nove osobe bio na tom mjestu

//

//current=current->next ;
//je isto šta i 
//counter=counter+1 ;

struct _Person;
typedef struct _Person* Position;

typedef struct _Person {

	char ime[MAX_LENGHT];
	char prezime[MAX_LENGHT];
	int birthYear;
	Position Next;
}Person;

int main() {
	Person head = { ime = {0},prezime = {0}, birthYear = 0,Next = NULL };
	menu..

}

Position createPerson() {
	Position newPerson = NULL;
	newPerson = (Position)malloc(sizeof(Person));
}
if (newPerson == NULL) {
	perror("Neuspjesno alociranje memorije za novu osobu!");
	exit(EXIT_FAILURE);
}

char ime[50] = { 0 };
char prezime[50] = { 0 };
char birthYear = 0;


printf("Unesi neko ime:");
scanf("%s", ime);
printf("Unesi neko prezime:");
scanf("%s", prezime);
printf("Unesi neku godinu rodenja:");
scanf("%d", birthYear);

strcpy(newPerson->ime, ime);
strcpy(newPerson->prezime, prezime);
newPerson->birthYear = birthYear;
return newPerson;

//dodavanje na pocetak liste

int InsertAtFrontOfList(Position Head) {
	Position newPerson = NULL;
	newPerson = createPerson();
	if (newPerson == NULL) {
		return 0;
	}
	newPerson->next = head->next;
	head->next = newPerson;
	return EXIT_SUCCESS;
}
}

int InsertAtEndOfList(Position Head) {
	Position newPerson = NULL;
	Position last = NULL;

	newPerson = createPerson();
#include <stdio.h>
#include <stdlib.h>

struct _person

typedef struct _person*position

typedef struct _person {

	char ime[50];
	char prezime[50];
	int birthyear;
	Position Next;
}Person;

int main() {
	Person Head = { ime = {0}, prezime = {0}, birthyear=0, Next=NULL }

}

Position create Person() {

	Position new Person = NULL;
	char ime[50] = { 0 };
	char prezime = { 0 };
	char birthyear = 0;

	new Person = (Position)malloc(sizeof(Person));
}

//provjera

printf("Unesi neko ime");
scanf("%s", ime);
printf("Unesi neko prezime");
scanf("%s", prezime);
printf("Unesi neku godinu rodenja");
scanf("%d", birthyear);

strcpy(newPerson->ime, ime);
strcpy(newPerson->prezime, prezime);
new person->birthyear = birthyear;
return newPerson;

//dodavanje na pocetak liste

add_to_front(Position Head) {
	Position newPerson = NULL;
	newPerson = create Person();
	if (newPerson) {
		newPerson->Next = Head->Next
		Head->Next = newPerson;
	}

}
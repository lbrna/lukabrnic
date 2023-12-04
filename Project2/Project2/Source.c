






#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE (128)
#define MAX_LINE (1024)
#define MAX_POINTS (15)


typedef struct _student
{
	char name[MAX_SIZE];
	char surname[MAX_SIZE];
	double points;


}Student;


int readNoRowsInFile()
{
	int counter = 0;
	FILE* filePointer

}

int showStudents(int noStudents, Student* students)
{
	//int counter = 0;

	for (int counter = 0; counter < noStudents; c)
}

int calculateRelativePoints()
{



}

int counter 0;
FILE* filePointer = NULL;
Student* students = NULL;

students = (Student*)malloc(noStudents * sizeof())
if (!students)
{
	printf("Neuspjesna alokacija memorije!\n");
	return NULL;
}


int main() {

	int noRows = 0;
	Student* students = NULL;

	noRows = readNoRowsInFile();
	if (noRows > 0)
	{
		students = allocateMemoryAndReadStudents(readNoRowsInFile);
		showStudents(noRows, students);

		free(students);
	}

	return EXIT_SUCCESS;

	return 0;
}

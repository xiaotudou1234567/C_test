#define _CRT_SECURE_NO_WARNINGS 1
#define EXPAND 5
#define NAME_MAX 20
#define SEX_MAX 10
#define TEL_MAX 15
#define PLACE_MAX 20

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <errno.h>
#include <string.h>

enum menu
{
	EXIT,
	ADD,
	DELET,
	FIND,
	CHANGE,
	SHOW,
	CLEAR,
	SORT,
};

typedef struct student
{
	char name[NAME_MAX];
	char sex[SEX_MAX];
	int age;
	char tel[TEL_MAX];
	char place[PLACE_MAX];
}Stu;

typedef struct contact
{
	Stu* person;
	int num;
	int capability;
}Cont;

void Add(Cont* contact);
void Show(Cont* contact);
void Find(Cont* contact);
void Change(Cont* contact);
void Delet(Cont* contact);
void Clear(Cont* contact);
int compare(void* a, void* b);
void Save(Cont* contact);
void Load(Cont* contact);
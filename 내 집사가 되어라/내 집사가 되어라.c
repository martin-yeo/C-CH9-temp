#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

typedef struct cat_info {
	char* name;
	int age;
	char* character;
	int level;
} CAT;

// ������ ������ �ٸ�! ������ ��!
CAT cats[5] = {
	{ "������", 5,	"�¼���",   1 },
	{	"�Ϳ��", 3,	"��ĥ��",   2 },
	{	"������", 7,	"���� ����", 3 },
	{	"�����",	 2,	"�ò�����",  4 },
	{	"�ų���",	 1,	"�� �����", 5 }
};

void printCat(CAT* pC); // ������ ������ �ٸ�! ������ ��!
int checkColection(int* cl);  // ������ ������ �ٸ�! ������ ��!

int main(void) {
	srand(time(NULL));
	int collection[5] = { 0, };
	system("cls");

	while (1) {

		///////////////////////////////
		// ���⸦ �ϼ��Ͻʽÿ�.
		///////////////////////////////

	}

	return 0;
}

void printCat(CAT* pC) {
	int w = 50;
	char* word = "< ���� ������� ���簡 �Ǿ����! >";
	int l = strlen(word);
	char* spacer = "======";
	printf("\n\n|%-*s%*s%*s|\n", (w - l) / 2, spacer, l, word, (w - l) / 2, spacer);

	printf(" %-8s: %s\n", "�� ��", pC->name);
	printf(" %-8s: %d��\n", "�� ��", pC->age);
	printf(" %-8s: %s\n", "Ư ¡", pC->character);
	printf(" %-8s: ", "�� ��");
	for (int i = 0; i < pC->level; i++) {
		printf("��");
	}
	printf("\n\n");
}

int checkColection(int* cl) {
	int collectAll = 1;

	///////////////////////////////
	// ���⸦ �ϼ��Ͻʽÿ�.
	///////////////////////////////

	return collectAll;
}

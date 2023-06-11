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

// 교재의 설정과 다름! 주의할 것!
CAT cats[5] = {
	{ "깜냥이", 5,	"온순함",   1 },
	{	"귀요미", 3,	"까칠함",   2 },
	{	"수줍이", 7,	"잠이 많음", 3 },
	{	"까꿍이",	 2,	"시끄러움",  4 },
	{	"돼냥이",	 1,	"늘 배고픔", 5 }
};

void printCat(CAT* pC); // 교재의 설정과 다름! 주의할 것!
int checkColection(int* cl);  // 교재의 설정과 다름! 주의할 것!

int main(void) {
	srand(time(NULL));
	int collection[5] = { 0, };
	system("cls");

	while (1) {

		///////////////////////////////
		// 여기를 완성하십시오.
		///////////////////////////////

	}

	return 0;
}

void printCat(CAT* pC) {
	int w = 50;
	char* word = "< 다음 고양이의 집사가 되었어요! >";
	int l = strlen(word);
	char* spacer = "======";
	printf("\n\n|%-*s%*s%*s|\n", (w - l) / 2, spacer, l, word, (w - l) / 2, spacer);

	printf(" %-8s: %s\n", "이 름", pC->name);
	printf(" %-8s: %d살\n", "나 이", pC->age);
	printf(" %-8s: %s\n", "특 징", pC->character);
	printf(" %-8s: ", "레 벨");
	for (int i = 0; i < pC->level; i++) {
		printf("★");
	}
	printf("\n\n");
}

int checkColection(int* cl) {
	int collectAll = 1;

	///////////////////////////////
	// 여기를 완성하십시오.
	///////////////////////////////

	return collectAll;
}

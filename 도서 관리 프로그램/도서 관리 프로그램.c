#include <stdio.h>

typedef struct book {
	int id; // 번호(ID)
	char* title; // 제목
	int available; // 0 : 대출 중, 1 : 대출 가능
} BOOK;

void print_books(BOOK* books); // 함수 선언

int main(void) {
	BOOK books[4] = { // 도서 4권 정의, 처음에는 모두 대출 가능한 상태
			{1, "C 입문편", 1},
			{2, "파이썬 기본편", 1},
			{3, "자바 기본편", 1},
			{4, "파이썬 중급편", 1}
	};

	int input; // 사용자 입력을 저장할 변수
	
	while (1) {
		print_books(books); // 전체 도서 정보 출력 함수 호출
		printf("대출/반납할 책 번호를 입력하세요.(종료 : -1) : ");
		scanf_s("%d", &input); // 사용자 입력

		///////////////////////////////
		// 이 곳만 완성하면 됩니다.
		///////////////////////////////

	}
	return 0;
}

// 전체 도서 정보 출력, books 배열은 구조체 포인터로 처리
void print_books(BOOK* books) { // 함수 정의
	char* available = "대출 가능";
	char* unavailable = "대출 중";
	printf("전체 도서 목록입니다.\n");
	printf("===============================\n");
	for (int i = 0; i < 4; i++) {
		printf("%d. %-16s ", books[i].id, books[i].title); // 도서 번호, 도서 제목 출력
		// 대출 여부 출력
		if (books[i].available) {
			printf("[%s]\n", available);
		}
		else {
			printf("[%s]\n", unavailable);
		}
	}
	printf("===============================\n");
}

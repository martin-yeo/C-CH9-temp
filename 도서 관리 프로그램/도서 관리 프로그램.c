#include <stdio.h>

typedef struct book {
	int id; // ��ȣ(ID)
	char* title; // ����
	int available; // 0 : ���� ��, 1 : ���� ����
} BOOK;

void print_books(BOOK* books); // �Լ� ����

int main(void) {
	BOOK books[4] = { // ���� 4�� ����, ó������ ��� ���� ������ ����
			{1, "C �Թ���", 1},
			{2, "���̽� �⺻��", 1},
			{3, "�ڹ� �⺻��", 1},
			{4, "���̽� �߱���", 1}
	};

	int input; // ����� �Է��� ������ ����
	
	while (1) {
		print_books(books); // ��ü ���� ���� ��� �Լ� ȣ��
		printf("����/�ݳ��� å ��ȣ�� �Է��ϼ���.(���� : -1) : ");
		scanf_s("%d", &input); // ����� �Է�

		///////////////////////////////
		// �� ���� �ϼ��ϸ� �˴ϴ�.
		///////////////////////////////

	}
	return 0;
}

// ��ü ���� ���� ���, books �迭�� ����ü �����ͷ� ó��
void print_books(BOOK* books) { // �Լ� ����
	char* available = "���� ����";
	char* unavailable = "���� ��";
	printf("��ü ���� ����Դϴ�.\n");
	printf("===============================\n");
	for (int i = 0; i < 4; i++) {
		printf("%d. %-16s ", books[i].id, books[i].title); // ���� ��ȣ, ���� ���� ���
		// ���� ���� ���
		if (books[i].available) {
			printf("[%s]\n", available);
		}
		else {
			printf("[%s]\n", unavailable);
		}
	}
	printf("===============================\n");
}

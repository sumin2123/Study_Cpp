#include <stdio.h>
#include <string.h>

class Human {
protected:
	char name[12];
	int age;

public:
	Human(const char* aname, int aage) {
		strcpy(name, aname);
		age = aage;
	}

	void intro() {
		printf("�̸� = %s, ���� = %d\n", name, age);
	}84.7
};

class Student :public Human {
protected:
	int stunum;

public:
	Student(const char* aname, int aage, int astunum) :Human(aname, aage) {
		stunum = astunum;
	}

	void intro() {
		printf("%d�й� %s�Դϴ�.\n", stunum, name);
	}

	void study() {
		printf("���̴� ��, �̻��� ��, �̻� ��\n");
	}
};

int main() {
	Human h("����", 10);
	Student s("���л�", 15, 1234567);
	Human* pH;
	Student* pS;

	pH = &h; //�翬�� ����
	pS = &s; //�翬�� ����
	pH = &s; //����
	//pS=&h; // ����

	pS = (Student*)&h;
	pS->intro();
}
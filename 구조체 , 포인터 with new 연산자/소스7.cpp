#define _CRT_SECURE_NO_WARNINGS    // strcpy() 함수 때문에
# include <iostream>
# include <cstring>
using namespace std;

struct Mysturct {
	char name[20];
	//string name;  // 널문자가 'age' 변수로 들어감
	int age;
};

const int SIZE = 20;

int main() {
	/*
	   1. 포인터 연산 with new 연산자
	*/
	char animal[SIZE];
	char* ps;

	cin.get(animal, SIZE);
	// 동적할당
	ps = new char[strlen(animal) + 1];
	strcpy(ps, animal);

	cout << "입력한 동물:" << animal << '\n';
	cout << "첫 글자:" << animal[0] << '\n';
	cout << "animal 변수 주소: " << &animal << '\n';
	cout << "복사한 동물 이름: " << ps << " 그 주소: " << &ps << '\n'; // 서로 다른 주소 값

	delete[] ps;	// 동적할당 해제

	/*
	   2. 구조체와 포인터 with new 연산자
	*/
	Mysturct* A = new Mysturct;
	cout << "당신의 이름은: " << '\n';
	cin >> A->name;
	//cin >> (*A).name; 
	//cin >> A[0].name;
	cout << "당신의 나이는: " << '\n';
	cin >> A->age;

	cout << "입력 받은 이름과 나이: " << A->name << ' ' << A->age << '\n';

	delete A;

}
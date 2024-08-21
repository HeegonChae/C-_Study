#include <iostream>
#include <string>
#include <cstring>		// strlen() 함수 사용
using namespace std;
const int SIZE = 25;

int main()
{	
	char name0[SIZE];
	char name1[SIZE];
	char name2[SIZE] = "C++programming";
	char* name3;

	name3 = name2;
	cin.get(name0, SIZE);
	cin.ignore();
	cout << "name0: " << name0 << '\n';

	cin.get(name1, SIZE);
	cout << "음, " << name1 << "씨, 이름 길이: ";
	cout << strlen(name1) << "\n";									// 널문자 제외 길이
	cout << strlen(name2) << "\n";
	cout << strlen(name3) << "\n";

	cout << sizeof(name1) << "바이트 크기의 배열 입니다." << '\n';   // 25
	cout << sizeof(name2) << "바이트 크기의 배열 입니다." << '\n';   // 25
	cout << sizeof(name3) << "바이트 크기의 포인터 입니다." << '\n'; // 8

	name1[3] = '\0';
	name2[3] = '\0';

	cout << name1 << "\n";
	cout << name2 << "\n";

}
#include <iostream>
#include <string>
using namespace std;

/* 
   1. 배열은 다른 배열에 통째로 대입 불가
   2. 단, 포인터로 선언시 배열(의 주소) 대입 가능
*/
int main()
{
	short month[12] = { 1, 2, 3 };				
	short* year;

	year = month;

	cout << month << "\n";                                          // 주소값 = 0000004BFED0FA28
	cout << sizeof(month) << "\n";					// 배열 메모리 상 크기: short 자료형 x 12 = 24
	cout << sizeof(month) / sizeof(short) << "\n"; 
	cout << year << "\n";
	cout << year[1] << "\n";
	cout << sizeof(year) << "\n";					// 포인터 크기 = 8: 32 or 64비트 아키텍쳐(4 or 8바이트) 
	cout << sizeof(year) / sizeof(short) << "\n";
	cout << "\n";

	/*==========================================================================================*/
	char a[] = { 'H', 'E', 'L', 'L', 'O', '!', '\0' };
	char* b;
	string A = "hello";
	string *B;

	b = a;
	B = &A;

	cout << a << "\n";
	cout << sizeof(a) << "\n";					// 배열 메모리 상 크기: char 자료형 x 7 = 7
	cout << sizeof(a) / sizeof(char) << "\n";
	cout << b << "\n";
	cout << sizeof(b) << "\n";              			// 포인터 크기 = 8
	cout << sizeof(b) / sizeof(char) << "\n";			
	cout << "\n";

	cout << A << "\n";
	cout << sizeof(A) << "\n";					// string 객체 메모리 상 크기: 40
	cout << sizeof(A[6]) << "\n";					// string 객체 요소 메모리 크기 = char형 객체 메모리 크기 = 1 
	cout << sizeof(A) / sizeof(string) << "\n";			// 1
	cout << *B << "\n";
	cout << sizeof(B) << "\n";              			// 포인터 크기 = 8
	cout << sizeof(B) / sizeof(string) << "\n";
	cout << "\n";
}

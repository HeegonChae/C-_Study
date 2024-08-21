#include <iostream>
using namespace std;

int main() {
    int a = 6;
    int* b;     // 간접 참조 연산자(*)
    b = &a;     // 주소 연산자(&)

    cout << "int 변수 a의 주소: " << &a << "\n";
    cout << "포인터 변수 b의 값: " << b << "\n";
    cout << "*b의 참조 값: " << *b << "\n";

    *b += 1;
    cout << "int 변수 a의 값: " << a << "\n";
    cout << "*b의 참조 값: " << *b << "\n";
    b += 1;
    cout << "updated 포인터 변수 b의 값: " << b << "\n"; // 4 바이트 증가
}

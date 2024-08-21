#include <iostream>
using namespace std;

int main() {

	double* p3 = new double[3]; // double형 데이터 3개를 저장할 수 있는 공간 대입
	p3[0] = 0.3;
	p3[1] = 0.4;
	p3[2] = 0.5;

	cout << p3[0] << ' ' << p3[1] << '\n';
	cout << &p3[0] << '\n';
	cout << &p3[1] << '\n';
	p3 += 1;					// 1: double형 데이터 공간 크기 1개(= 8 바이트)
	cout << p3[0] << '\n';
	cout << &p3[0] << '\n';

	p3 -= 1;					// 다시 시작 위치를 지시해야한다.
	delete[] p3;				// 베열 메모리 삭제

	cout << &p3[0] << '\n';		// 엉뚱한 값

	return 0;
}

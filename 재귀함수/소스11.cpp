# include <iostream>
using namespace std;

// 디폴트 매개변수 선언 방법: 가장 오른쪽에 위치해서 선언할 것
void CountDown(int n = 3);
int Mysum(int n = 5);

int main() {
	CountDown();
	cout << "\n";

	int(*pt)(int);						// 함수 포인터 선언 소스14.cpp
	pt = Mysum;

	cout << Mysum << ' ' << pt << "\n"; // 함수명이 함수 포인터
	cout << Mysum(3) << "\n";
	cout << pt(3) << "\n";
	cout << (*pt)(3) << "\n";
}

void CountDown(int n) {					// 디폴트 파라미터 존재
	cout << n << "th Code #1" << "\n";
	if (n > 0)
		CountDown(n - 1);
	cout << n << "th Code #2" << "\n";
}

int Mysum(int n) {
	return n + 1;
}
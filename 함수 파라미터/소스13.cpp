# include <iostream>
using namespace std;

// 함수 파라미터 전달 방법 3가지
// 값 전달
void SwapA(int n, int m);
// 포인터 전달
void SwapB(int* n, int* m);
// 참조 변수 전달
void SwapC(int& n, int& m);


int main() {
	int w1 = 10; int w2 = 20;
	cout << "변경 전 값 : " << w1 << ", " << w2 << endl;
	cout << "\n";
	
	SwapA(w1, w2);
	cout << "값을 전달" << endl;
	cout << "변경 후 값 : " << w1 << ", " << w2 << "\n";
	cout << "\n";

	SwapB(&w1, &w2);
	cout << "포인터를 전달" << endl;
	cout << "변경 후 값 : " << w1 << ", " << w2 << "\n";
	cout << "\n";

	SwapC(w1, w2);
	cout << "참조 변수를 전달" << endl;
	cout << "변경 후 값 : " << w1 << ", " << w2 << "\n";

}

void  SwapA(int n, int m) {
	int temp;
	temp = n;
	n = m;
	m = temp;
}

void SwapB(int* n, int* m) {
	int temp;
	temp = *n;
	*n = *m;
	*m = temp;
}

void SwapC(int& n, int& m) {
	int temp;
	temp = n;
	n = m;
	m = temp;
}
	
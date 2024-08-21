# include <iostream>
using namespace std;

void sum(int, int);
void sum(float, float);

int main() {
	cout << "두 실수를 입력하시오: " << ' ';
	int a, b;
	cin >> a >> b;
	sum(a, b);

	cout << "두 실수를 입력하시오: " << ' ';
	float c, d;
	cin >> c >> d;
	sum(c, d);

	// 오버로딩된 함수의 주솟값은 서로 다르다.
	void(*IntSumfuncptr)(int, int) = sum;
	void(*FloatSumfuncptr)(float, float) = sum;

	cout << IntSumfuncptr << "\n";
	cout << FloatSumfuncptr << "\n";
}

void sum(int n, int m) {

	cout << "두 정수 더한 값: \n" << (n + m) << endl;
}

void sum(float n, float m) {

	cout << "두 정수가 아닌 실수 더한 값: \n" << (n + m) << endl;
}
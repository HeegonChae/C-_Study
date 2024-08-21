# include <iostream>
using namespace std;

// 템플릿 함수 선언
template <class heegon>
heegon sum(heegon n, heegon m);		// 'heegon' 자료형 매개변수 & 'heegon' 자료형 반환
                                    // Case 1, 2 작동
template <class heegon>
heegon sum(int n, heegon m);		// Case 2, 3 작동

int main() {

	int a = 3; int b = 7;
	float c = 3.45; float d = 7.34;

	//cout << "Case1. 두 수의 합: " << sum(a, b) << endl;	// 오버로딩 안되는 경우 2번
	cout << "Case2. 두 수의 합: " << sum(c, d) << endl;
	cout << "Case3. 두 수의 합: " << sum(a, c) << endl;		// 해결책 by 오버로딩

}

template <class heegon>
heegon sum(heegon n, heegon m) {
	return n + m;
}

template <class heegon>
heegon sum(int n, heegon m) {
	return n + m;
}
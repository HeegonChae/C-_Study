#include <iostream>
using namespace std;

union Myunion {
	int intVal;
	double doubleVal;
	long longVal;
}A;

int main() {
    A.intVal = 9;

	A.doubleVal = 8883.3;
	cout << sizeof(double) << "\n";
	cout << "\n";

	cout << A.intVal << "\n";
	cout << A.doubleVal << "\n";		// 8바이트 double형 데이터 타입이 4바이트 'A.intVal' 값 덮어씀
	cout << "\n";

	A.longVal = 5543;
	cout << A.intVal << "\n";			
	cout << A.doubleVal << "\n";		// 8바이트 메모리 전체 차지
	cout << A.longVal << "\n";		    // 메모리 일부가 덮어쓰여짐
	cout << "\n";

	/*====================================================================================*/
	enum spectrum {
		red = 0, orange, blue = 1
	};

	// 인스턴스 생성
	spectrum B = orange;
	int C = blue;

	cout << B << "\n";
	cout << B + 100 << "\n";
	cout << C + 100 << "\n";

}
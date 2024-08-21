# include <iostream>
using namespace std;

struct Mystruct {
	string NAME;
	string POS;
	int H;
	bool W;
}A;			// 인스턴스 생성

int main() {
	A.NAME = "SON";
	A.POS = "FW";
	A.H = 189;

	// 인스턴스 생성
	Mystruct B;
	B.NAME = "KIM";
	B.POS = "DF";
	B.H = 190;

	// 인스턴스 생성
	Mystruct C[2] = {
		{""},
		{"HWANG", "FW", 180, true}
	};
	cout << C[0].NAME << ' ' << C[1].NAME << '\n';
	cout << C[0].POS << ' ' << C[1].POS << '\n';
	cout << C[0].H << ' ' << C[1].H << '\n';
	cout << C[0].W << ' ' << C[1].W << '\n';

}

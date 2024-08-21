# include <iostream>
using namespace std;

int main() {
	char a, b;

	cout << "a의 값을 입력하시오: ";
	cin >> a;
	// cin.ignore();                             
	cin >> b;
	cout << a << ' ' << b << '\n';

	switch (a)
	{
	case '1':
		cout << "입력한 문자는 '1' 입니다. \n" << endl;
		break;
	case '2':
		cout << "입력한 문자는 '2' 입니다. \n" << endl;
		break;
	case '3':
		cout << "입력한 문자는 '3' 입니다. \n" << endl;
		break;
	default:
		cout << "입력한 문자는 '1' or '2' or '3' 외에 다른 문자입니다. \n" << endl;
		break;
	}
	cout << '\n';
}

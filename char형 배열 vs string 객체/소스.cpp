#include <iostream>
#include <string>
using namespace std;

int main() {
	char a = 'a';
	string A = "a";

	char b[2] = { 'a', '\0' };
	const char* B1[] = { "a", "b" };
	//char* B1[] = { "a", "b" };     // ERROR

	string B2[] = { "a", "b", "\0"};
	bool c = 10;

	cout << "char a : " << a << "\n";
	cout << "string A : " << A << "\n";
	cout << "char b[] : " << b[0] << ' ' << b[1] << "\n";
	cout << "char* B1[]: " << *(B1 + 1) << ' ' << B1 << ' ' << (B1 + 1) << "\n";
	cout << "string B2[]: " << *(B2+1) << ' ' << B2 << ' ' << (B2+1) << "\n";
	cout << "bool c: " << c << "\n";
}

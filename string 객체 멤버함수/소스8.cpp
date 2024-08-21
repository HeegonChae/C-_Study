# include <iostream>
using namespace std;

int main() {

	string name = "heegon is heechan's brother";
	string part = "hee";
	string ref = "hee";
	
	// length() 멤버함수
	size_t length = name.length();  
	
	// find() 멤버함수
	size_t found_idx1 = name.find(part, 0);	
	size_t found_idx2 = name.find(ref, found_idx1 + 1);
	
	// substr() 멤버함수
	string subtext = name.substr(7, 5);		

	cout << "Length: " << length << "\n";
	if (found_idx1 != string::npos)
		cout << "First is started at " << found_idx1  <<"th index" << "\n";
	if (found_idx2 != string::npos)
		cout << "Second is started at " << found_idx2 << "th index" << "\n";
	cout << "Sub Text: " << subtext << "\n";
}

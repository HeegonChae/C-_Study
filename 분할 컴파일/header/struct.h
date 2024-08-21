#ifndef STRUCT_H     // 기호 상수명(e.g. STRUCT_H , yeah, HEEGON, hee, ... )   
#define STRUCT_H

# include <iostream>
using namespace std;

struct MyInfo {
	int age;
	string name;
};

void display(MyInfo*);

#endif // !STRUCT_H 

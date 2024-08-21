//분할 컴파일 - 함수 원형(소스16.cpp)

// 헤더 파일
# include "struct.h"

// 함수 원형
void display(MyInfo* Who) {
	cout << "제 이름은: " << Who->name << "이고 나이는: " << Who->age << "\n";
}
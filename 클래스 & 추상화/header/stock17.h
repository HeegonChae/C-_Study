#ifndef STOCK_H     // 기호 상수명(e.g. STRUCT_H , yeah, HEEGON, hee, ... )   
#define STOCK_H

# include <iostream>
using namespace std;

class Stock  // 사용자 정의된 데이터형 by 클래스 => 'Stock' 
{

// 1. private 멤버
private:
	string name;
	int shares;
	float share_val;					  // ex) 변경 시 => 'update' 매써드 수행
	double total_val;					  // 불가능 => total_val = shares * share_val

	void cal(int Num, float Share_val)   // 'public'내 함수들 통해서 'total_value' 출력만 목적
	{
		total_val = Num*Share_val;
	}

// 2. public 멤버
public:
	void acquire(string, int, float);   
	void buy(int, float);
	void sell(int, float);
	void update(float);
	void show();
	// C++ 기본 제공 멤버 함수
	Stock();							// 디폴트 생성자
	~Stock();							// 파괴자
};

#endif //
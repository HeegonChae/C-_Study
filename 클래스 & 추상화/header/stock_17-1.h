#ifndef STOCK_17_1_H     // 기호 상수명(e.g. STRUCT_H , yeah, HEEGON, hee, ... )   
#define STOCK_17_1_H

# include <iostream>
using namespace std;

class Stock  							
{

// 1. private 멤버
private:
	string name;
	int shares;
	float share_val;					  
	double total_val;					  

	void cal(int Num, float Share_val)   
	{
		total_val = Num*Share_val;
	}

// 2. public 멤버
public:
	void buy(int, float);
	void sell(int, float);
	void update(float);
	void show();

// C++ 기본 제공 멤버 함수
	Stock(string, int, float);							// new 디폴트 생성자 by 오버로딩
	Stock();												
	~Stock();									// 파괴자
};

#endif

#ifndef STOCK_17_1_H     // 기호 상수명(e.g. STRUCT_H , yeah, HEEGON, hee, ... )   
#define STOCK_17_1_H

# include <iostream>
using namespace std;

/* 'private' & 'public' 역할
	: 클래스 멤버에 대한 접근 제어하는 역할
	: 'private' 멤버에 대한 값 변경 시 => 반드시 'public'에 선언된 멤버 함수들을 통해서 값을 변경!!
*/

class Stock  // 사용자 정의된 데이터형 by 클래스 => 'Stock' 
{
	// 1. 비공개 멤버
		/*
			클래스 내에서만 접근 가능
			만약 '::' 사용 범위 결정 연산자 사용하면, 'public'내 메써드에서 사용 가능
			직접적인 데이터는 'private'로 선언하여 데이터 은닉하자
		*/
private:
	string name;
	int shares;
	float share_val;					  // ex) 변경 시 => 'update' 매써드 수행
	double total_val;					  // 불가능 => total_val = shares * share_val

	void cal(int Num, float Share_val)   // 'public'내 함수들 통해서 'total_value' 출력만 목적
	{
		total_val = Num*Share_val;
	}

	// 2. 공개 멤버
		/* 'private' 내 데이터 변경
			클래스 외부에서도 접근 가능
		*/
public:
	void buy(int, float);
	void sell(int, float);
	void update(float);
	void show();
	// C++ 기본 제공 멤버 함수
	Stock(string, int, float);							// new 디폴트 생성자 by 오버로딩
	Stock();
	~Stock();											// 파괴자
};

#endif

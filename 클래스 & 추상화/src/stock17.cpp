# include "stock17.h"

Stock::Stock()
{
}

Stock::~Stock()
{
}

// 생성자 역할
void Stock::acquire(string NAME, int num, float VALUE)
{
	// 'public' 멤버 통해서 'private'내 데이터 업데이트
	name = NAME;
	shares = num;
	share_val = VALUE;
	cal(shares, share_val);
}

void Stock::buy(int num, float VALUE)
{
	shares += num;
	share_val = VALUE;
	cal(shares, share_val);
}

void Stock::sell(int num, float VALUE)
{
	shares -= num;
	share_val = VALUE;
	cal(shares, share_val);
}

void Stock::update(float VALUE)
{
	share_val = VALUE;
	cal(shares, share_val);
}

void Stock::show()
{
	cout << "회사명: " << name << endl;
	cout << "주식 수: " << shares << endl;
	cout << "주가: " << share_val << endl;
	cout << "주식 총 가치: " << total_val << endl;
	cout << "===============================" << endl;
}
# include "stock_17-1.h"

// 추상화와 클래스_(2) 자동 할당
int main() {

	//클래스 선언
	cout << "생성자를 이용하여 객체 생성\n";
	Stock temp("Chae", 100, 1000);					// or Stock temp = Stock("Chae", 100, 1000);

	cout << "디폴트 생성자를 이용하여 객체 생성\n";
	Stock temp2;

	cout << "temp와 temp2 출력\n";
	temp.show();
	temp2.show();
	
	cout << "생성자를 이용하여 temp 내용 업데이트\n";
	
	// ** 파괴자는 파괴할 당시 name을 출력하는 데, 
	// ** 파괴자가 호출되었을 때 이미 name의 값은 바뀜
	temp = Stock("Heegon", 200, 800);  

	cout << "재설정된 temp 출력\n";
	temp.show();

	return 0;
}
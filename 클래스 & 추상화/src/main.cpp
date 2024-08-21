# include "stock17.h"

int main() {

	// 클래스 선언
	Stock temp;						// or Stock *temp;

	// 'Stock' 클래스 멤버 참조('.' or '->')
	temp.acquire("Chae", 10, 1000);				// or temp->acquire; & (*temp).acquire;
	temp.show();

	temp.update(900);
	temp.show();

	temp.buy(2, 1000);
	temp.show();

	temp.sell(5, 800);
	temp.show();
}

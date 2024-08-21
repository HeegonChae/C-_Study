# include "stock17.h"

int main() {

	// 1. 클래스 선언
	Stock temp;										// Stock *temp;

	// 'Stock' 클래스 멤버 참조('.' or '->')
	temp.acquire("Chae", 10, 1000);				// temp->acquire; or (*temp).acquire;
	temp.show();

	temp.update(900);
	temp.show();

	temp.buy(2, 1000);
	temp.show();

	temp.sell(5, 800);
	temp.show();
}
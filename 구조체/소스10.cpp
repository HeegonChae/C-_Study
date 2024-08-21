# include <iostream>
using namespace std;

// 구조체 선언
struct Time {
	int hours;
	int mins;
};
const int MinPerHour = 60;

Time Mysum(Time* T1, Time* T2);

int main() {
	Time day1 = { 5, 45 };
	Time day2 = { 4, 55 };

	// 구조체 함수 파라미터로 전달: 구조체의 포인터값 전달
	Time ans = Mysum(&day1, &day2);

	cout << "2일간 소요시간: " << ans.hours << "시간, " << ans.mins << "분 입니다." <<'\n';
}

Time Mysum(Time* T1, Time* T2) {
	// 'Time'형 변수 total 멤버 초기화
	Time total;

	total.hours = (T1->hours) + (T2->hours);
	total.mins = (T1->mins) + (T2->mins);

	if (total.mins >= MinPerHour) {
		total.hours += int(total.mins / MinPerHour);
		total.mins = total.mins % MinPerHour;
	}

	return total;
}
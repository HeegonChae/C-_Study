# include <iostream>
using namespace std;
const int SIZE = 8;

int Mysum(int* array, int n);
int Mysum2(int* start, int* end);

int main() {

	int arr[SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	//int ans = Mysum(arr, SIZE);
	int ans = Mysum(&arr[0], SIZE);
	int ans2 = Mysum2(arr, arr + 3);

	cout << "size of int: " << sizeof(int) << '\n';		// 4바이트
	cout << "size of arr: " << sizeof(arr) << '\n';		// 4*8 바이트
	cout << "size of &arr: " << sizeof(&arr) << '\n';   // 포인터 크기: 8바이트
	cout << "size of *arr: " << sizeof(*arr) << '\n';   // 4바이트
	cout << "arr[0]: " << *(arr) << '\n';
	cout << "전체 합은 : " << ans << '\n';
	cout << "중간까지 합은: " << ans2 << '\n';
}

int Mysum(int* array, int n) {
	int total = 0;

	cout << "size of array: " << sizeof(array) << '\n';

	for (int i = 0; i < n; i++) {
		total += array[i];
	}

	return total;
}

int Mysum2(int* start, int* end) {
	int tot = 0;
	int* ptr;
	
	for (ptr = start; ptr <= end; ptr++) {
		tot += *ptr;
	}

	return tot;
}
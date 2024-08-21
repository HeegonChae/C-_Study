## 동적 할당 활용 (2) 구조체, 포인터 with new 연산자
### 2-1. 포인터 연산 with new 연산자
1) **버퍼 크기** 동적 할당
 ```
	char* ps;
	cin.get(animal, SIZE);

	ps = new char[strlen(animal) + 1];
 ```
---
### 2-2. 구조체와 포인터 with new 연산자
1) 정의
   * '구조체명' * '구조체_인스턴스명' = new '구조체명';
2) 활용
   * <b>동적 구조체에서만 멤버 연산자('->')</b>
   * cf) 소스10.cpp
 ```
	Mysturct* A = new Mysturct;
	cin >> A->name;
 ```

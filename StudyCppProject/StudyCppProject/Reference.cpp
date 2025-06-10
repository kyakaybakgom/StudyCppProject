#include <iostream>

int change_val(int* p) {
	*p = 3;

	return 0;
}

int change_val(int& p) {
	p = 3;

	return 0;
}

int function() {
	int a = 2;
	return a;
}

int main() {
	// 참조자의 도입

	int number = 5;

	std::cout << number << std::endl;
	change_val(&number); // *p를 통해 number를 참조
	std::cout << number << std::endl;

	int a = 3;
	int& another_a = a; // a의 참조자 another_a 정의

	another_a = 5;

	std::cout << "참조자의 도입" << std::endl;
	std::cout << "a : " << a << std::endl;
	std::cout << "another_a : " << another_a << std::endl;


	// 함수 인자로 레퍼런스 받기

	int number1 = 5;

	std::cout << "함수 인자로 레퍼런스 받기" << std::endl;
	std::cout << number1 << std::endl;
	change_val(number1);
	std::cout << number1 << std::endl;


	// 여러가지 참조자 예시

	int x;
	int& y = x;
	int& z = y;

	std::cout << "여러가지 참조자 예시 출력" << std::endl;

	x = 1;
	std::cout << "x : " << x << " y : " << y << " z : " << z << std::endl;

	y = 2;
	std::cout << "x : " << x << " y : " << y << " z : " << z << std::endl;

	z = 3;
	std::cout << "x : " << x << " y : " << y << " z : " << z << std::endl;


	// 상수에 대한 참조자

	const int& ref = 4;

	std::cout << "상수에 대한 참조자" << std::endl;
	std::cout << ref << std::endl;


	// 배열들의 레퍼런스
	int arr[3] = { 1, 2, 3 };
	int(&ref1)[3] = arr;

	ref1[0] = 2;
	ref1[1] = 3;
	ref1[2] = 1;

	std::cout << "배열들의 레퍼런스" << std::endl;
	std::cout << arr[0] << arr[1] << arr[2] << std::endl;


	// 레퍼런스를 리턴하는 함수
	/*
	* 	
												  	  함수에서 값 리턴 (int f()) || 함수에서 참조자 리턴 (int& f())
												  	  --------------------------------------------------------------
	값 타입으로 받음(int a = f())				   || 값 복사됨					 || 값 복사됨. 다만 지역 변수의 레퍼런스를 리턴하지 않도록 주의
												   
	참조자 타입으로 받음 (int& a = f())			   || 컴파일 오류				 || 가능. 다만 마찬가지로 지역 변수의 레퍼런스를 리턴하지 않도록 주의

	상수 참조자 타입으로 받음 (const int& a = f()) || 가능						 || 가능. 다만 마찬가지로 지역 변수의 레퍼런스를 리턴하지 않도록 주의
	*/
	const int& c = function();

	std::cout << "레퍼런스를 리턴하는 함수" << std::endl;
	std::cout << "c : " << c << std::endl;

	return 0;
}
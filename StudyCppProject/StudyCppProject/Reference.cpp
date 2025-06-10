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
	// �������� ����

	int number = 5;

	std::cout << number << std::endl;
	change_val(&number); // *p�� ���� number�� ����
	std::cout << number << std::endl;

	int a = 3;
	int& another_a = a; // a�� ������ another_a ����

	another_a = 5;

	std::cout << "�������� ����" << std::endl;
	std::cout << "a : " << a << std::endl;
	std::cout << "another_a : " << another_a << std::endl;


	// �Լ� ���ڷ� ���۷��� �ޱ�

	int number1 = 5;

	std::cout << "�Լ� ���ڷ� ���۷��� �ޱ�" << std::endl;
	std::cout << number1 << std::endl;
	change_val(number1);
	std::cout << number1 << std::endl;


	// �������� ������ ����

	int x;
	int& y = x;
	int& z = y;

	std::cout << "�������� ������ ���� ���" << std::endl;

	x = 1;
	std::cout << "x : " << x << " y : " << y << " z : " << z << std::endl;

	y = 2;
	std::cout << "x : " << x << " y : " << y << " z : " << z << std::endl;

	z = 3;
	std::cout << "x : " << x << " y : " << y << " z : " << z << std::endl;


	// ����� ���� ������

	const int& ref = 4;

	std::cout << "����� ���� ������" << std::endl;
	std::cout << ref << std::endl;


	// �迭���� ���۷���
	int arr[3] = { 1, 2, 3 };
	int(&ref1)[3] = arr;

	ref1[0] = 2;
	ref1[1] = 3;
	ref1[2] = 1;

	std::cout << "�迭���� ���۷���" << std::endl;
	std::cout << arr[0] << arr[1] << arr[2] << std::endl;


	// ���۷����� �����ϴ� �Լ�
	/*
	* 	
												  	  �Լ����� �� ���� (int f()) || �Լ����� ������ ���� (int& f())
												  	  --------------------------------------------------------------
	�� Ÿ������ ����(int a = f())				   || �� �����					 || �� �����. �ٸ� ���� ������ ���۷����� �������� �ʵ��� ����
												   
	������ Ÿ������ ���� (int& a = f())			   || ������ ����				 || ����. �ٸ� ���������� ���� ������ ���۷����� �������� �ʵ��� ����

	��� ������ Ÿ������ ���� (const int& a = f()) || ����						 || ����. �ٸ� ���������� ���� ������ ���۷����� �������� �ʵ��� ����
	*/
	const int& c = function();

	std::cout << "���۷����� �����ϴ� �Լ�" << std::endl;
	std::cout << "c : " << c << std::endl;

	return 0;
}
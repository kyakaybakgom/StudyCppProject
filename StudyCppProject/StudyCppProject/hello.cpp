#include <iostream> // �������, c++ ǥ�� ����¿� �ʿ��� �͵� ����
using namespace std; // std : C++ ǥ�� ���̺귯���� ��� �Լ�, ��ü ���� ���ǵ� ���ӽ����̽�(namespace) 

#ifdef hello
int main() // ���α׷� ���� �� ���� ���� ����Ǵ� �Լ�
{
	// cout : ostream Ŭ������ ��ü�� ǥ�� ����� ���
	// ex) std::cout << /* ����� �� */ << /* ����� �� */ << ... << /* ����� �� */;
	cout << "Hello, World!" << endl;	// std::cout << "Hello, World!" << std::endl;

	return 0;
}
#endif // hello

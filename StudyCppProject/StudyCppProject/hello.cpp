#include <iostream> // 헤더파일, c++ 표준 입출력에 필요한 것들 포함
using namespace std; // std : C++ 표준 라이브러리의 모든 함수, 객체 등이 정의된 네임스페이스(namespace) 

#ifdef hello
int main() // 프로그램 실행 시 가장 먼저 실행되는 함수
{
	// cout : ostream 클래스의 객체로 표준 출력을 담당
	// ex) std::cout << /* 출력할 것 */ << /* 출력할 것 */ << ... << /* 출력할 것 */;
	cout << "Hello, World!" << endl;	// std::cout << "Hello, World!" << std::endl;

	return 0;
}
#endif // hello

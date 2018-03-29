#include"FixedList.hpp"

int main() {
	FixedList<int, 5> l;
	std::cout << l.capacity() << std::endl;
	std::cout << l.size() << std::endl;
	system("pause");
	return 0;
}
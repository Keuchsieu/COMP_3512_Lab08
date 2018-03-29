#include"FixedList.hpp"

int main() {
	FixedList<int, 5> l;
	std::cout << l.capacity() << std::endl;
	std::cout << l.size() << std::endl;
	std::cout << std::boolalpha << "adding to list: " << l.add(1) << std::endl;
	std::cout << l.size() << std::endl;
	l.get(1);
	//std::cout << l.get(1) << std::endl;
	system("pause");
	return 0;
}
#include"FixedList.hpp"

int main() {
	FixedList<int, 5> l;
	std::cout << l.capacity() << std::endl;
	std::cout << l.size() << std::endl;
	std::cout << std::boolalpha << "adding to list: " << l.add(1) << std::endl;
	std::cout << l.size() << std::endl;
	std::cout <<"get first element: " << l.get(0) << std::endl;
	std::cout << "get first element: " << l[0] << std::endl;
	std::cout << "get first index of 1: " << l.getFirstIndex(1) << '\n';
	try {
		std::cout << l.remove(9) << '\n';
	}
	catch (NotFoundException e) {
		std::cout << e.what() << '\n';
	}
	try {
		std::cout << l.get(10) << '\n';
	}
	catch (NotFoundException e) {
		std::cout << e.what() << '\n';
	}
	std::cout << l.size() << '\n';
	system("pause");
	return 0;
}
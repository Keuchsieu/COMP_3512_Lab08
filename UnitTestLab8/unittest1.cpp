#include "CppUnitTest.h"
#include"../COMP_3512_Lab08/FixedList.hpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab8
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestInitializing)
		{
			// TODO: Your test code here
			FixedList<int, 1> l1;
			FixedList<char, 5> l2;
			for (int i = 0; i < l1.capacity(); ++i) {
				l1.add(i);
			}
			for (int i = 0; i < l2.capacity(); ++i) {
				l2.add('A'+i);
			}
			std::cout << l1.size() << l1.capacity();
			Assert::AreEqual(l1.size(), l1.capacity(), L"size not equal to capacity");
			Assert::AreEqual(l2.size(), l2.capacity());
			Assert::AreEqual(l1.get(0), 0);
			Assert::AreEqual(l2.get(4), 'E');
		}

		TEST_METHOD(TestAddition) {
			FixedList<int, 10> int_list;
			for (int i = 0; i < 10; ++i) {
				Assert::AreEqual(int_list.add(i), true);
				Assert::AreEqual(int_list.get(i), i);
			};
			Assert::AreEqual(int_list.add(-1), false);
		}

		TEST_METHOD(TestGet) {

		}
	};
}
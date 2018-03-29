#include "CppUnitTest.h"
#include"../COMP_3512_Lab08/FixedList.hpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab8
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestInitializing1)
		{
			// TODO: Your test code here
			FixedList<int, 1> l1;
			for (int i = 0; i < l1.capacity(); ++i) {
				l1.add(i);
			}
			Assert::AreEqual(l1.size(), l1.capacity(), L"size not equal to capacity");
		}

		TEST_METHOD(TestInitializing2)
		{
			// TODO: Your test code here
			FixedList<char, 5> l2;
			for (int i = 0; i < l2.capacity(); ++i) {
				l2.add('A' + i);
			}
			Assert::AreEqual(l2.size(), l2.capacity());
		}

		TEST_METHOD(TestInitializing3)
		{
			// TODO: Your test code here
			FixedList<int, 1> l1;
			for (int i = 0; i < l1.capacity(); ++i) {
				l1.add(i);
			}
			Assert::AreEqual(l1.get(0), 0);
		}

		TEST_METHOD(TestInitializing4)
		{
			// TODO: Your test code here
			FixedList<char, 5> l2;
			for (int i = 0; i < l2.capacity(); ++i) {
				l2.add('A' + i);
			}
			Assert::AreEqual(l2.get(4), 'E');
		}


		TEST_METHOD(TestAddition) {
			FixedList<int, 10> int_list;
			for (int i = 0; i < 10; ++i) {
				Assert::AreEqual(int_list.add(i), true);
			};
			Assert::AreEqual(int_list.add(-1), false);
		}

		TEST_METHOD(TestAddition2) {
			FixedList<int, 1> int_list;
			for (int i = 0; i < 1; ++i) {
				int_list.add(i);
			};
			Assert::AreEqual(int_list.add(-1), false);
		}

		// how to deal with exceptions in unit test?
		TEST_METHOD(TestGet) {
			wchar_t message[200];
			FixedList<int, 10> int_list;
			for (int i = 0; i < 10; ++i) {
				Assert::AreEqual(int_list.get(i), i);
			};
			try {
				int_list.get(11);
				_swprintf(message, L"No exception for input %g", 11);
				Assert::Fail(message, LINE_INFO());
			}
			catch (NotFoundException e) {
				// catched expected exception
			}
			catch (...) {
				Assert::Fail(message, LINE_INFO());
			}
		}
	};
}
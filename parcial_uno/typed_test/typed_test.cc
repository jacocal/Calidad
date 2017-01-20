#include <iostream>
#include "gtest/gtest.h"
#include "Hierarchie.h"

template <class instanceType>
class FixTyped : public testing::Test
{

	public:
		Base * FixTyped()
		{

			instance2Test = new instanceType;

		}

	protected:
		Base* instance2Test;

};

tyoedef testing::Types<Child1, Child2> implementations;

TYPED_TEST_CASE(FixTyped, implementations);

TYPED_TEST(fixTyped, enteros)
{

	EXPECTED_EQ(1, this->instance2Test->something());

}

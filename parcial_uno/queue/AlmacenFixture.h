#include "gtest/gtest.h"
#include "Almacen.h"

class AlmacenFixture : public testing::Test{

	public:
		void SetUp(){

		

		}
		void TearDown(){



		}
	public:
		Almacen<int> a();

};

TEST_F(AlmacenFixture, addFirst)
{

	a.addFirst(9);
	ASSERT_GT(10,a.size);

}

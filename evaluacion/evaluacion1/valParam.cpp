#include "gtest/gtest.h"
#include "Ordenamiento.h"

typedef Ordenamiento<int>* factoryMethod();

Ordenamiento<int>* instance1()
{
    return new Ordenamiento<int>;
}

class Fixture : public testing::TestWithParam<factoryMethod*>
{
protected:
    Ordenamiento<int>* instance2Test;
public:
    void SetUp()
    {
        instance2Test = (*GetParam())();      
    }
    void TearDown()
    {
        delete instance2Test;
        instance2Test = NULL;
    }
};

TYPED_TEST(FixTyped, testName)
{

	int n = 5;
	srand((int)time(NULL));
	int enteros[n];

	for(int i = 0; i< n; i++)
	{
        	enteros[i] = rand() % 100;
	}

	//Ordenamieto<int>* ordenamiento = new Ordenamiento<int>();

	//Ordenamiento<int>::ordenamientoBurbuja(enteros, n, Ordenamiento<int>::desc);
		
	//ordenamiento->ordenamientoBurbuja(enteros, n, Ordenamiento<int>::desc);
	
	this->instance2Test->ordenamientoBurbuja(enteros, n, Ordenamiento<int>::desc);

	for(int i = 1; i < n; i++)
	{
        	EXPECT_LT(enteros[i-1],enteros[i]);
	}

	//EXPECT_EQ(10,this->instance2Test->variable);
 
}

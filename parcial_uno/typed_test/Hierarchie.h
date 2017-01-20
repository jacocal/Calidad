#include <iostream>

using std::cout;

class Base {

	public:
		virtual int something() = 0;

};

class Child1 : public Base {

	public:
		int something()
		{

			cout << "I'm in child 1";
			return 1;

		}

};

class Child2 : public Base {
	
	public:
		int something()
		{

			cout << "I'm in child 2";
			return 1;

		}

};

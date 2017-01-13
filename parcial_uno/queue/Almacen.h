#ifndef _ALMACEN_H_
#define _ALMACEN_H_

#include <iostream>
#include <vector>

template <class T>
class Almacen : public std::vector<T> {

	public:
		int size;
	
	public:
		Almacen(){};
		Almacen(int size){ this->size = size; }

};

#endif

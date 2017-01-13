#include "Almacen.h"

int main(){

	Almacen<int> * almacen = new Almacen<int>(10);

	std::cout << almacen->size << std::endl;

	return 0;

}

#include "Cifrado.h"

class Cesar : public Cifrado
{

	public:
		char cesaAl(char letter, int decrease);	
		std::string * decrypt(char word[]);

};

#include <iostream>
#include "log.h"
int multiplicar(int a, int b);
void iniciaMostra(const char* texto);


int main()
{
	mostra("Hello, World.");

	//int numero;
	//numero = std::cin.get();

	//std::cout << numero << std::endl; // caracter ASCII

	//std::cout << multiplicar(2, numero);

	int a = 'A';

	std::cout << a << std::endl;

	std::cout << sizeof(short) << std::endl;


	short x = 32736;
	short z = x;
	const short* i = &x;
	short y = x + 500; // resultado: -32300, porque 32736 + 500 = 33236 congruente à -32300 (mod 2^16)

	std::cout << y << std::endl;
	std::cout << *i << std::endl;
	std::cout << z << std::endl;

	x = 2;

	std::cout << z << std::endl;
	std::cout << *i << std::endl;

	iniciaMostra("Testando.");

	return 0;
}
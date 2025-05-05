#include <iostream>

void mostra(const char* texto);
int multiplicar(int a, int b);


int main()
{
	//mostra("Hello, World.");

	int numero;
	numero = std::cin.get();

	std::cout << numero << std::endl; // caracter ASCII

	//std::cout << multiplicar(2, numero);

	return 0;
}
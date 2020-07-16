#include <iostream>
#include <conta.h>
#include <cliente.h>
#include <fila.h>
#include <clientepj.h>

int main(int argc, char const *argv[])
{
	ClientePJ teste("1", "2");


	queue<ClientePJ> lista(2);

	lista.push(teste);

	std::cout << lista.front().getRazaoSocial() << std::endl;

	return 0;
}
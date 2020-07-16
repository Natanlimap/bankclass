#include <iostream>
#include <conta.h>
#include <cliente.h>
#include <fila.h>

int main(int argc, char const *argv[])
{
	Conta a("natan de lima", "003");
	Conta b("joel", "004");
	Cliente teste("joca", "01");
	Cliente teste2("lucas", "01");



	queue<Cliente> aa(2);
	aa.push(teste);
	aa.push(teste2);

	std::cout << aa.front().nome << std::endl;

	return 0;
}
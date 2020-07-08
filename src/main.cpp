#include <iostream>
#include <conta.h>
#include <cliente.h>

int main(int argc, char const *argv[])
{
	Conta a("natan de lima", "003");
	Conta b("joel", "004");
	Cliente teste("teste", "01");
	Cliente teste2("teste", "01");

	std::cout << teste.quantCliente << std::endl;




	return 0;
}
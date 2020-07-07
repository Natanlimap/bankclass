#include <iostream>
#include <conta.h>

int main(int argc, char const *argv[])
{
	Conta a("natan de lima", "003");
	Conta b("joel", "004");


	std::cout << a.saldo << std::endl;

	a.deposita(100);

	std::cout << a.saldo << std::endl;

	a.saca(20);
	
	std::cout << a.saldo << std::endl;

	std::cout << "teste de transferencia" << std::endl;

	a.transfere(b, 20);

	std::cout << "saldo de A: " << a.saldo <<std::endl;

	std::cout << "saldo de B: " << b.saldo <<std::endl;



	return 0;
}
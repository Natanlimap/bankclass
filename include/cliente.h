#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
#include <iostream>
class Cliente{

public:
	Cliente();
	Cliente(std::string lnome, std::string lcpf);
	std::string nome;
	std::string cpf;

	static int quantCliente;
};

#endif

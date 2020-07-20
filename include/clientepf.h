#ifndef CLIENTEPF_H
#define CLIENTEPF_H

#include <string>
#include <iostream>
#include <cliente.h>

class ClientePF : public Cliente
{

public:
	ClientePF();
	ClientePF(std::string lnome, std::string lcpf);
	std::string nome;
	std::string cpf;
};

#endif

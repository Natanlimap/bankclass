#ifndef AGENCIA_H
#define AGENCIA_H

#include <string>
#include <iostream>
#include <conta.h>
#include <vector>
class Agencia{

public:
	Agencia(std::string lnome, std::string lnumeroDaAgencia);
	
	std::string nome;
	std::string numeroDaAgencia;

	std::vector<Conta> contas;
};

#endif

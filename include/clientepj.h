#ifndef CLIENTEPJ_H
#define CLIENTEPJ_H

#include <string>
#include <iostream>
#include <cliente.h>

class ClientePJ: public Cliente{
public:
	ClientePJ();
	ClientePJ(std::string lCNPJ, std::string lRazaoSocial);

	void setCNPJ(std::string lCNPJ);
	void setRazaoSocial(std::string lRazaoSocial);


	std::string getCNPJ();
	std::string getRazaoSocial();

private:
	std::string CNPJ;
	std::string RazaoSocial;	
	
};

#endif

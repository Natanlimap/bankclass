#include <clientepj.h>


ClientePJ::ClientePJ()
{
	setCNPJ("");
	setRazaoSocial("");

}

ClientePJ::ClientePJ(std::string lCNPJ, std::string lRazaoSocial)
{

	setCNPJ(lCNPJ);
	setRazaoSocial(lRazaoSocial);

}

void ClientePJ::setCNPJ(std::string lCNPJ)
{
	this->CNPJ = lCNPJ;
}

void ClientePJ::setRazaoSocial(std::string lRazaoSocial)
{
	this->RazaoSocial = lRazaoSocial;
}

	
std::string ClientePJ::getCNPJ()
{
	return this->CNPJ;
}

std::string ClientePJ::getRazaoSocial()
{
	return this->RazaoSocial;
}
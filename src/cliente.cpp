#include <cliente.h>

int Cliente::quantCliente;

Cliente::Cliente(){
	quantCliente += 1;
}
Cliente::Cliente(std::string lnome, std::string lcpf): 
nome(lnome), cpf(lcpf){
	quantCliente += 1;
}
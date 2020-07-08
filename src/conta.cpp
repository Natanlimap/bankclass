#include <conta.h>

int Conta::quantContas;

Conta::Conta(std::string ltitular, std::string lnumero): 
titular(ltitular), numero(lnumero), saldo(0){
	quantContas += 1;
}

bool Conta::saca(float value){
	if(this->saldo < value){
		std::cout << "Saldo insuficiente" << std::endl;
		return false;
	}
	this-> saldo -= value; 
	return true;
}

void Conta::deposita(float value){
	this-> saldo += value; 
}

void Conta::transfere(Conta &x, float valor){
	if(saca(valor)){
		x.deposita(valor);
	}

}

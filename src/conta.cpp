#include <conta.h>

conta::conta(std::string ltitular, std::string lnumero): 
titular(ltitular), numero(lnumero), saldo(0){
	
}

bool conta::saca(float value){
	if(this->saldo < value){
		std::cout << "Saldo insuficiente" << std::endl;
		return false;
	}
	this-> saldo -= value; 
	return true;
}

void conta::deposita(float value){
	this-> saldo += value; 
}

void conta::transfere(conta &x, float valor){
	if(saca(valor)){
		x.deposita(valor);
	}

}

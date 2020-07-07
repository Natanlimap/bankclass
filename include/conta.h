#ifndef CONTA_H
#define CONTA_H


#include <string>
#include <iostream>
class Conta{

public:
	Conta(std::string ltitular, std::string lnumero);
	std::string numero;
	std::string titular;
	float saldo;
	bool saca(float value);
	void deposita(float value);
	void transfere(Conta &x, float valor);

};
#endif

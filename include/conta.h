#include <string>
#include <iostream>
class conta{

public:
	conta(std::string ltitular, std::string lnumero);
	std::string numero;
	std::string titular;
	float saldo;
	bool saca(float value);
	void deposita(float value);
	void transfere(conta &x, float valor);

};
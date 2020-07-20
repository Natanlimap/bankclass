#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H 
#include <string>
#include <vector>

class Funcionario
{
public:
	Funcionario();
	
	static int quantFuncionario;

	
	std::string nome;
	std::string dataAdmi;
	std::string salario;

	int horasTrabalhoDiario;
	std::vector<std::string> horaEntrada;
	std::vector<std::string> horaSaida;
	
};
#endif

all:
	g++ -std=c++11 ./src/main.cpp  ./src/caixa.cpp  ./src/seguranca.cpp  ./src/gerente.cpp ./src/funcionario.cpp ./src/fila.cpp ./src/clientepf.cpp ./src/conta.cpp ./src/clientepj.cpp ./src/cliente.cpp ./src/agencia.cpp -o bank -I include 

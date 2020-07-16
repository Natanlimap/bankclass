
all:
	g++ -std=c++11 ./src/main.cpp ./src/fila.cpp ./src/conta.cpp ./src/clientepj.cpp ./src/cliente.cpp ./src/agencia.cpp -o bank -I include 

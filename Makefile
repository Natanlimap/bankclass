
all:
	g++ -std=c++11 ./src/main.cpp ./src/conta.cpp ./src/cliente.cpp ./src/agencia.cpp -o bank -I include 

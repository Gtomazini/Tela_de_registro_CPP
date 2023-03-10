#include <iostream>
#include <string>
using namespace std;

int main (){

	string login1;
	cout << "Bem vindo" << endl << "Digite seu login, por favor." << endl;
	getline (cin, login1);
	cout << "Usuario registrado com sucesso!" << endl;
	string senha1;
		do
		{
	cout << "Agora digite sua senha para se registrar por favor, minimo de 8 caracteres" << endl;
	cin >> senha1;
		}
		while (senha1.length() < 8);
	cout << "Senha foi registrada com sucesso!" << endl;


		
	cout << "Seja bem vindo " << login1 << endl;

	cin.ignore(); //Limpa buffer de entrada
	
	cout << "Pressione qualquer tecla para fechar o programa...";
	
	cin.get(); //esperando a ação do user, evita fechar de repente.
	return 0;
	}


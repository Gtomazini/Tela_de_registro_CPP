#include <iostream>
#include <string>
#include <fstream> // trabalhar com arquivos
#include <filesystem> //trabalha com diretórios e arquivos
#include "criar_arquivo.h" // Outro programa criado para criar diretórios e arquivos usando as bibliotecas acima. - Other program created for the porpuses of create files these two library above.

int main (){

	std::string login1, senha1;

	std::cout << "Bem vindo" << std::endl << "Digite seu login, por favor." << std::endl;
	std::getline (std::cin, login1);
	std::cout << "Usuario registrado com sucesso!" << std::endl;


		do
		{
		std::cout << "Agora digite sua senha para se registrar por favor, minimo de 8 caracteres" << std::endl;
		std::cin >> senha1;
		}
		while (senha1.length() < 8);
		std::cout << "Senha foi registrada com sucesso!" << std::endl;
	

	std::cout << "Seja bem vindo " << login1 << std::endl;

	std::cin.ignore(); //Limpa buffer de entrada - Buff cleaner
	
	std::string diretorio = "C:\\Users\\user\\Documents\\login"; //Navega no caminho desejado - Path where the .txt is create.
												       //
	std::filesystem::create_directory(diretorio);
	
	criar_arquivo (diretorio, login1, senha1); // cria o arquivo e insere login e senha - Create the file and write login and password in the .txt
						   


	std::cout << "Pressione qualquer tecla para fechar o programa...";
	
	std::cin.get(); //esperando a ação do user, evita fechar de repente. - Waiting for user action to close the program.
	return 0;
	}


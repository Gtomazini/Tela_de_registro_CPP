#include "criar_arquivo.h"
#include <iostream>
#include <string>
#include <fstream>
#include <filesystem>

bool criar_arquivo(const std::string& diretorio, const std::string& login, const std::string& senha){


	std::filesystem::path diretorio_path(diretorio);

    if(!std::filesystem::exists(diretorio_path)){
        std::cout << "Criando diretório " << diretorio << std::endl;
        if(!std::filesystem::create_directory(diretorio_path)){
            std::cerr << "Erro ao criar diretório " << diretorio << std::endl;
            return false;
        }
    }



	static int arquivo_numero = 1; //Inicializa o número do arquivo com 1
	
	for (const auto& arquivo : std::filesystem::directory_iterator(diretorio_path)){
		if (arquivo.path().extension() == ".txt"){
			arquivo_numero++;
		}
	}

	std::string filename = "login_senha" + std::to_string(arquivo_numero) + ".txt";

		std::filesystem::path corredor1 = diretorio + "/" + filename;

		std::ofstream arquivo_saida(corredor1);

			if (arquivo_saida.is_open()){

				arquivo_saida << login << '\n';
				arquivo_saida << senha << '\n';

				std::cout << "Arquivo " << filename << " criado com sucesso!\n";
				arquivo_numero++; //Incrementa o número
				return true;
				} 
			else {
					std::cout << "Erro ao criar o arquivo " << filename <<"\n";
					return false;
				}
			
}

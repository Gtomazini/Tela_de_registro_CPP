# Tela_de_registro_CPP

Repositório de um programa para registro de usuário e senha em C++.
Repository of a user registration and password program in C++.

1# Estrutura Básica / Basic Structure
2# Estrutura Básica com Banco de Dados / Basic Structure with Database
3# Estrutura Básica com Criptografia / Basic Structure with Encryption

The project in the begin was to a simple login structure, now the program has a function o consultate a path and create a .txt file every time when the program is executed. His structure now has two .cpp files, wich is the main (tela_registro.cpp) and the secondary which is called by header criar_arquivo.cpp(.h) and his function is consultate the path and create the files.

O projecto no início era uma simples estrutura de login, agora o programa tem uma função o consultar um caminho e criar um arquivo .txt cada vez que o programa é executado. A sua estrutura agora tem dois arquivos .cpp, que é o principal (tela_registro.cpp) e o secundário que é chamado pelo cabeçalho criar_arquivo.cpp(.h) e a sua função é consultar o caminho e criar os arquivos.

Para compilar a tela_registro, é necessário os arquivos externos criar_arquivo.cpp e criar_arquivo.h na mesma pasta. 
No compilador fica 'g++ tela_registro.cpp criar_arquivo.cpp -o tela_registro.exe'

To compile registration_screen, you need the external files create_file.cpp and create_file.h in the same folder. 
In the compiler it is 'g++ tela_registro.cpp criar_arquivo.cpp -o tela_registro.exe'

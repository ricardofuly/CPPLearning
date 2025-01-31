#include <iostream>
#include <string> //Biblioteca para trabalhar com strings

int main() {
    int idade;
    std::string nome;
    std::string cidade;

    std::cout << "Digite o seu nome: ";
    std::getline(std::cin, nome); //Captura o nome completo

    std::cout << "Digite a sua Cidade: ";
    std::getline(std::cin, cidade);

    std::cout << "Digite a sua idade: ";
    std::cin >> idade;

    std::cout << "Ola " << nome << " " << "Voce tem " << idade << " anos! " << "E mora em: "<< cidade << std::endl;
    return 0;
}
// Criando uma struct

/*
#include <iostream>

// Definição da struct Personagem
struct Personagem {
    std::string nome;
    int vida;
    int ataque;
};

int main() {
    // Criando um objeto da struct
    Personagem heroi = {"Arthur", 100, 20};

    // Acessando os atributos
    std::cout << "Nome: " << heroi.nome << "\n";
    std::cout << "Vida: " << heroi.vida << "\n";
    std::cout << "Ataque: " << heroi.ataque << "\n";

    return 0;
}
//Saida
Nome: Arthur  
Vida: 100  
Ataque: 20  
*/

//Criando Objetos Dinamicamente (new e delete)

/*
#include <iostream>

struct Personagem {
    std::string nome;
    int vida;
    int ataque;
};

int main() {
    // Criando dinamicamente um novo personagem
    Personagem* inimigo = new Personagem;
    
    // Definindo valores
    inimigo->nome = "Dragão";
    inimigo->vida = 200;
    inimigo->ataque = 50;

    // Exibindo os atributos
    std::cout << "Nome: " << inimigo->nome << "\n";
    std::cout << "Vida: " << inimigo->vida << "\n";
    std::cout << "Ataque: " << inimigo->ataque << "\n";

    delete inimigo;  // Liberando memória
    inimigo = nullptr; // Evita ponteiro inválido

    return 0;
}
*/

#include <iostream>
#include <string>

struct personagem
{
    std::string nome;
    int vida;
    int ataque;
};

int main(){
    personagem* player = new personagem;

    std::cout << "Digite o nome do personagem: " << std::endl;
    std::cin.ignore(); // Limpa o buffer antes do getline
    std::getline(std::cin, player->nome); // Agora lê nomes compostos

    std::cout << "Digite o valor da sua vida: " << std::endl;
    std::cin >> player->vida;

    std::cout << "Digite o valor do seu ataque: " << std::endl;
    std::cin >> player->ataque;

    std::cout << "\n==== Personagem Criado ====" << std::endl;
    std::cout << "Nome: " << player->nome << std::endl;
    std::cout << "Vida: " << player->vida << std::endl;
    std::cout << "Ataque: " << player->ataque << std::endl;

    delete player; // Libera a memória
    player = nullptr; // Evita ponteiro inválido

    return 0;
}

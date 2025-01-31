// Criando e acessando um array
/*#include <iostream>

int main(){
    int numeros[5] = {10, 20, 30, 40, 50}; // Array de 5 posicoes

    std::cout << "Primeiro elemento: " << numeros[0] << std::endl;
    std::cout << "Terceiro elemento: " << numeros[2] << std::endl;

    return 0;
}*/

// Percorrendo um Array com for
/*#include <iostream>

int main(){
    int numeros[5] = {10, 20, 30, 40, 50};

    for (int i = 0; i < 5; i++)
    {
        std::cout << "Elemento " << i << ":" << numeros[i] << std::endl;
    }
    return 0;
}*/

// Vetores com std::vector (Mais Flexível)

/*#include <iostream>
#include <vector>

int main(){
    std::vector<int> numeros = {10, 20, 30};

    // Adicionando um novo número ao vetor
    numeros.push_back(40);

    // Mostrando todos os elementos do vetor
    for (int i = 0; i < numeros.size(); i++)
    {
        std::cout << "Elemento " << i << ": " << numeros[i] << std::endl;
    }
    
    return 0;
}*/

#include <iostream>
#include <vector>
#include <algorithm> // Para transformar a string em minúsculas

int main(){
    std::vector<int> numeros = {};
    int soma = 0;
    std::string resposta;
    std::vector<std::string> nomes = {"Ricardo", "Pedro", "Rafael", "Lucas"};

    do
    {
        int numero = 0;

        std::cout << "Digite um numero: ";
        std::cin >> numero;
        numeros.push_back(numero);
        
        std::cout << "Gostaria de inserir mais numeros na lista (S / N): ";
        std::cin >> resposta;

        // Converter para maiúscula para evitar erro se o usuário digitar 'n'
        std::transform(resposta.begin(), resposta.end(), resposta.begin(), ::toupper);        
    } while (resposta != "N");

    for (int num : numeros)
    {
        soma += num;
    }
    
    std::cout << "A Soma e " << soma << std::endl;
    

    // Exibindo os nomes usando um loop for-each
    std::cout << "\nLista de nomes: " << std::endl;
    for (const auto& nome : nomes)
    {
        std::cout << "_ " << nome << std::endl;
    }
    
    return 0;    
}
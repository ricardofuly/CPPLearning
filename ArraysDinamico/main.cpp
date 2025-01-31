// Criando Arrays Dinâmicos com new[]

/*
#include <iostream>

int main() {
    int tamanho;
    
    std::cout << "Digite o tamanho do array: ";
    std::cin >> tamanho;

    int* array = new int[tamanho];  // Criando um array de tamanho variável

    // Preenchendo o array
    for (int i = 0; i < tamanho; i++) {
        array[i] = (i + 1) * 10;  // Exemplo: Preenche com múltiplos de 10
    }

    // Exibindo os valores do array
    std::cout << "Valores do array: ";
    for (int i = 0; i < tamanho; i++) {
        std::cout << array[i] << " ";
    }

    delete[] array;  // Libera a memória alocada
    array = nullptr; // Evita ponteiro inválido

    return 0;
}
*/

#include <iostream>

int main(){
    int tamanho;
    std::cout << "Quantos elemento gostaria de adicionar: ";
    std::cin >> tamanho;

    int* array = new int[tamanho]; // Aloca memória para o array

    for (int i = 0; i < tamanho; i++)
    {
        std::cout << "Digite um numero: ";
        std::cin >> array[i]; // Armazena o número corretamente
    }
    
    // Exibindo os valores armazenados
    std::cout << "Valores do array: " << std::endl;
    for (int i = 0; i < tamanho; i++)
    {
        std::cout <<  array[i] << " ";
    }
    std::cout << std::endl;

    delete[] array; // Libera a memória
    array = nullptr; // Evita ponteiro inválido
    return 0;  
}
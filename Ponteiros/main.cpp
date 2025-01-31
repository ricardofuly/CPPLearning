// Referências (&)

/*
#include <iostream>

int main() {
    int numero = 10;
    int& ref = numero;  // ref é uma referência para numero

    std::cout << "Numero: " << numero << std::endl;
    std::cout << "Referencia: " << ref << std::endl;

    ref = 20;  // Mudando ref, também mudamos numero!

    std::cout << "Numero modificado: " << numero << std::endl;
    return 0;
}
// Saida
Numero: 10  
Referencia: 10  
Numero modificado: 20  
*/

// Ponteiros (*)
/*
#include <iostream>

int main() {
    int numero = 10;
    int* ptr = &numero;  // Ponteiro recebe o endereço de numero

    std::cout << "Valor de numero: " << numero << std::endl;
    std::cout << "Endereco de numero: " << &numero << std::endl;
    std::cout << "Ponteiro ptr armazena: " << ptr << std::endl;
    std::cout << "Valor apontado por ptr: " << *ptr << std::endl;

    return 0;
}

// Saida
Valor de numero: 10  
Endereco de numero: 0x61ff08  
Ponteiro ptr armazena: 0x61ff08  
Valor apontado por ptr: 10  
*/

// Modificando Valores com Ponteiros
/*
    #include <iostream>

    int main() {
        int numero = 30;
        int* ptr = &numero;

        *ptr = 50;  // Alteramos o valor da variável diretamente pela memória

        std::cout << "Novo valor de numero: " << numero << std::endl;  // Exibe 50

        return 0;
    }
*/

// Ponteiros e Memória Dinâmica (new e delete)
/*
#include <iostream>

int main() {
    int* ptr = new int;  // Aloca memória para um inteiro
    *ptr = 100;          // Define valor

    std::cout << "Valor: " << *ptr << std::endl;

    delete ptr;  // Libera a memória
    return 0;
}
*/

#include <iostream>

int main(){
    int* numero = new int; // Aloca memória dinamicamente
    *numero = 100;         // Define o valor

    std::cout << "Valor Inicia: " << *numero << std::endl;

    delete numero; // Libera a memória
    numero = nullptr; // Evita ponteiro inválido
    return 0;
}
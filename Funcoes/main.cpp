#include <iostream>

/*
        tipo nomeDaFuncao(parametros){
            codigo
            return valor; // Se a funcao tiver retorno
        }
*/

// Função sem retorno

void mensagemBoasVindas(){
    std::cout << "Bem-vindo ao programa!" << std::endl;
}

// Função com retorno
int dobrar(int numero){
    return numero * 2;
}

// Função com múltiplos parâmetros
int soma(int a, int b){
    return a + b;
}

int main(){
    int valor = 5;
    int resultado = soma(10, 20);
    
    mensagemBoasVindas(); // Chamando a funcao

    std::cout << "O dobro de " << valor << " e " << dobrar(valor) << std::endl;
    std::cout << "A soma e: " << resultado << std::endl;
    return 0;
}
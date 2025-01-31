/* #include <iostream>

int main(){
    int idade;
    std::cout << "Digite a sua idade: ";
    std:: cin >> idade;

    if(idade >= 18){
        std::cout << "Voce e maior de idade!" << std::endl;
    }else{
        std::cout << "Voce e menor de idade!" << std::endl;
    }

    return 0;
}

*/

/*#include <iostream>

int main(){
   int idade;
    std::cout << "Digite a sua idade: ";
    std:: cin >> idade;

    if(idade < 12){
        std::cout << "Voce e uma crianca!" << std::endl;
    }else if(idade < 18){
        std::cout << "Voce e um adolecente!" << std::endl;
    }else{
        std::cout << "Voce e um adulto!" << std::endl;
    }

    return 0;
}
*/

#include <iostream>

int main(){
    int numero;

    std::cout << "Digite um numero: " << std::endl;
    std::cin >> numero;

    if (numero % 2 == 0)
    {
        std::cout << "O Numero e par" << std::endl;
    }else{
        std::cout << "O Numero e impar" << std::endl;
    }
    
    return 0;
}
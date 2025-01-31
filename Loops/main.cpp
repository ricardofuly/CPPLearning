/*#include <iostream>

int main(){
    int contador = 1;

    while (contador <= 5)
    {
        std::cout << "Numero: " << contador << std::endl;
        contador++;
    }
    
    return 0;
}
*/

/*#include <iostream>

int main(){
    for (int i =1; i <= 5; i++)
    {
        std::cout << "Numero: " << i << std::endl;
    }
    
    return 0;
}
*/

/*#include <iostream>

int main(){
    int senha;

    do
    {
       std::cout << "Digite a senha (1234): ";
       std::cin >> senha;
    } while (senha != 1234);

    std::cout << "Acesso permitido!" << std::endl;
    return 0;
}
*/

#include <iostream>

int main(){
    int numero;

    do
    {
       std::cout << "Digite um numero positivo: " << std::endl; 
       std::cin >> numero;
    } while (numero <= 0);

    std::cout << "Numero correto!" << std::endl;
    return 0;
}
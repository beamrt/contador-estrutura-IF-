#include <iostream>

using namespace std;

int main()
{

    int n1, n2, n3, contador;

    cout << "Digite o primeiro numero: \n";
    cin >> n1;

    cout << "Digite o segundo numero: \n";
    cin >> n2;

    cout << "Digite o terceiro numero: \n";
    cin >> n3;

    if (n1 == n2 || n1 == n3) {
        contador = contador + 1;
    }
    if (n2 == n3){
        contador = contador + 1;
    }
    if (n3 == n1 || n3 == n2) {
        contador = contador + 1;
    }

    cout << contador << " numeros iguais";



    return 0;
}


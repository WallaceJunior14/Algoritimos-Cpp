#include <iostream>
#include "fila.h"

using namespace std;

int main() {
    fila new_fila;
    int opcao;
    TipoItem item;

    cout << "Programa de Fila:";
    do
    {
        cout << "Digite 0 para parar o programa!\n";
        cout << "Digite 1 para  iserir!\n";
        cout << "Digite 2 para remover!\n";
        cout << "Digite 3 para mostrar a fila!\n";
        cin >> opcao;

        switch (opcao)
        {
        case 1:
            cout << "Digite o elemento a ser inserido: ";
            cin >> item;

            new_fila.inserir(item);
            break;
        case 2:
            item = new_fila.remover();

            cout << "O elemento removido é: " << item << endl;
            break;
        case 3:
            new_fila.imprimir();
            break;
        
        default:
            break;
        }
    } while (opcao != 0);
    

    return 0;
}
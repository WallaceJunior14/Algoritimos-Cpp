#include <iostream>
#include "pilha.h"
#include "pilha.cpp"

using namespace std;

int main()
{
	Pilha pilha;
	TipoItem item;
	int opcao;
	
	cout << "Programa gerador de pilha:\n\n";
	
	do{
		cout << "Digite 0 para parar o programa!\n";
		cout << "Digite 1 para inserir um elemento!\n";
		cout << "Digite 2 para remover um elemento!\n";
		cout << "Digite 3 para imprimir a pilha!\n";
		cin >> opcao;
		
		if (opcao == 1) {
			cout << "Digite o elemento: ";
			cin >> item;
			
			pilha.inserir(item);
		} else if (opcao == 2) {
			item = pilha.remover();
			
			cout << "Elemento removido: " << item << endl;
		} else if (opcao == 3) {
			pilha.mostra_pilha();
		}
		
		
	} while(opcao != 0);

	return 0;
}


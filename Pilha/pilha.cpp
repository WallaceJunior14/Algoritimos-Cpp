#include <iostream>
#include "pilha.h"

using namespace std;

//construtora
Pilha::pilha()
{
	tamanho = 0;
	estrutura = new TipoItem[max_itens];
}
// destrutora
Pilha::des_pilha()
{
	delete [] estrutura;
}
			
//Verifica se a pilha
bool Pilha::esta_cheia()
{
	return (tamanho == max_itens);
}
bool Pilha::esta_vazia()
{
	return (tamanho == 0);
}
			
// Execuçõess
void Pilha::inserir(TipoItem item)
{
	if (esta_cheia()) {
		cout << "A pilha está cheia!";
	} else {
		estrutura[tamanho] = item;
		tamanho++;
	}
}
TipoItem Pilha::remover()
{
	if (esta_vazia()) {
		cout << "A pilha está vazia, sem elementos para remoção!";
		return 0;
	} else {
		tamanho--;
		return estrutura[tamanho];
	}
}
void Pilha::mostra_pilha()
{
	cout << "Pilha: [ ";
	for (int i=0; i<tamanho; i++) {
		cout << estrutura[i] << ", ";
	}
	cout << "]\n";
}
TipoItem Pilha::mosrtra_tamanho()
{
	return tamanho;
}



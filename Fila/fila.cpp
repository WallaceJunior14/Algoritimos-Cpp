#include <iostream>
#include "fila.h"

using namespace std;

fila::fila(/* args */)
{
    primeiro = 0;
    ultimo = 0;
    
    estrutura = new TipoItem[max_itens];
}
fila::~fila()
{
    delete [] estrutura;
}

bool fila::esta_vazio()
{
    return (primeiro == ultimo);
}

bool fila::esta_cheio()
{
    return (ultimo-primeiro == max_itens);
}

void fila::inserir(TipoItem item)
{
    if (esta_cheio())
    {
        cout << "A fila está cheia\n";
    }
    else
    {
        estrutura[ultimo % max_itens] = item;
        ultimo++;
    }
    
}

TipoItem fila::remover()
{
    if (esta_vazio())
    {
        cout << "A fila está vazia!\n";
        return 0;
    }
    else
    {
        primeiro++;
        return estrutura[(primeiro-1) % max_itens];
    }
}

void fila::imprimir()
{
    cout << "Fila: [ ";
    for (int i = primeiro; i < ultimo; i++)
    {
        cout << estrutura[i % max_itens] << " ";
    }
    cout << "]\n";
}
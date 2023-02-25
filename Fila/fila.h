typedef int TipoItem;
const int max_itens = 100;

class fila
{
    private:
        int primeiro, ultimo;
        TipoItem* estrutura;

    public:
        fila(/* args */); // construtor
        ~fila(); // destrutor

        bool esta_vazio();
        bool esta_cheio();
        void inserir(TipoItem item);
        TipoItem remover();
        void imprimir();
};
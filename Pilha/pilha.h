
typedef int TipoItem;
const int max_itens = 100;

class Pilha {
	private:
		int tamanho;
		TipoItem* estrutura;
	
	public:
		//construtora
		pilha();
		// destrutora
		des_pilha(); 
		
		//Verifica se a pilha
		bool esta_cheia();
		bool esta_vazia();
		
		// Execuçõess
		void inserir(TipoItem item);
		TipoItem remover();
		void mostra_pilha();
		TipoItem mosrtra_tamanho();
};

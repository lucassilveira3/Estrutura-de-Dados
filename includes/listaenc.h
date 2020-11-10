#include "lista.h"
#include "tipoitem.h"
#include "tipocelula.h"

class ListaEncadeada : public Lista {
public:
    ListaEncadeada();
    ~ListaEncadeada();
    TipoItem GetItem(int pos);
    void SetItem(TipoItem item, int pos);
    void InsereInicio(TipoItem item);
    TipoItem RemovePosicao(int pos);
    int Pesquisa(TipoChave c);
    void Imprime();
    void Limpa();
private:
    TipoCelula* primeiro;
    TipoCelula* ultimo;
    TipoCelula* Posiciona(int pos, bool antes);
};
#ifndef pilhaenc_h
#define pilhaenc_h

#include "pilha.h"
#include "tipoitem.h"
#include "tipocelula.h"

class PilhaEncadeada : public Pilha{
public:
    PilhaEncadeada();
    virtual ~PilhaEncadeada();
    void Empilha(TipoItem item);
    TipoItem Desempilha();
    void Limpa();
    void Imprime();
private:
    TipoCelula *topo;
protected:
    int tamanho;

};

#endif
#ifndef pilha_h
#define pilha_h

#include "tipoitem.h"

class Pilha{
public:
    Pilha(){tamanho = 0;};
    int GetTamanho() {return tamanho;};
    bool Vazia() {return tamanho == 0;};
    virtual void Empilha(TipoItem item) = 0;
    virtual TipoItem Desempilha() = 0;
    virtual void Limpa() = 0;
    virtual void Imprime() = 0;
protected:
    int tamanho;

};

#endif
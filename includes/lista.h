#ifndef lista_h
#define lista_h

#include "tipoitem.h"

class Lista{
public:
    Lista() {tamanho =0;}
    int GetTamanho(){return tamanho;};
    bool Vazia(){return tamanho == 0;};
    virtual TipoItem GetItem(int pos) = 0;
    virtual void SetItem(TipoItem item, int pos) = 0;
    virtual void InsereInicio(TipoItem item) = 0;
    virtual TipoItem RemovePosicao(int pos) = 0;
    virtual int Pesquisa(TipoChave c)= 0;
    virtual void Imprime() = 0;
    virtual void Limpa() = 0;
protected:
    int tamanho;
};

#endif
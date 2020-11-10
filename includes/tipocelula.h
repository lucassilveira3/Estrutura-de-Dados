#ifndef tipocelula_h
#define tipocelula_h

#include "tipoitem.h"

class TipoCelula{
public:
    TipoCelula();
private:
    TipoItem item;
    TipoCelula *prox;

friend class ListaEncadeada;
friend class FilaEncadeada;
friend class PilhaEncadeada;

};

#endif
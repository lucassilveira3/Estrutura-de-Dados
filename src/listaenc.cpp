#include "listaenc.h"
#include <iostream>

ListaEncadeada::ListaEncadeada() : Lista() {
    primeiro = new TipoCelula();
    ultimo = primeiro;
}

ListaEncadeada::~ListaEncadeada()
{
    Limpa();
    delete primeiro;
}

TipoCelula* ListaEncadeada::Posiciona(int pos, bool antes=false){
    TipoCelula *p;
    
    if ( (pos > tamanho) || (pos <= 0) )
        throw "ERRO: Posicao Invalida!";

    p = primeiro;
    for(int i=1; i<pos; i++){
        p = p->prox;
    }

    if(!antes)
        p = p->prox;

    return p;
}

TipoItem ListaEncadeada::GetItem(int pos){
    TipoCelula *p;
    p = Posiciona(pos);

    return p->item;
}

void ListaEncadeada::SetItem(TipoItem item, int pos){
    TipoCelula *p;
    p = Posiciona(pos);
    p->item = item;
}

void ListaEncadeada::InsereInicio(TipoItem item)
{
    TipoCelula *nova;
    
    nova = new TipoCelula();
    nova->item = item;
    nova->prox = primeiro->prox;
    primeiro->prox = nova;
    tamanho++;

    if(nova->prox == 0)
        ultimo = nova;
}

TipoItem ListaEncadeada::RemovePosicao(int pos) {
    TipoItem aux;
    TipoCelula *p, *q;

    if (tamanho == 0)
        throw "ERRO: Lista vazia!";

    p = Posiciona(pos, true);
    q = p->prox;
    p->prox = q->prox;
    tamanho--;
    aux = q->item;
    delete q;

    if(p->prox == 0)
        ultimo = p;

    return aux;
}

int ListaEncadeada::Pesquisa(TipoChave c) {
    TipoItem aux;
    TipoCelula *p;
    int pos;

    if (tamanho == 0)
        throw "ERRO: Lista vazia!";
    
    p = primeiro->prox;
    aux.SetChave(-1);

    pos = 0;
    while (p!=0) {
        pos++;
        if (p->item.GetChave() == c) {
            aux = p->item;
            break;
        }
        p = p->prox;
    }

    return pos;
}

void ListaEncadeada::Imprime() {
    TipoCelula *p;
    p = primeiro->prox;

    while (p!=0) {
        p->item.Imprime();
        std::cout << std::endl;
        p = p->prox;
    }
}

void ListaEncadeada::Limpa() {
    TipoCelula *p;
    p = primeiro->prox;

    while (p!=NULL) {
        primeiro->prox = p->prox;
        delete p;
        p = primeiro->prox;
    }

    ultimo = primeiro;
    tamanho = 0;
}
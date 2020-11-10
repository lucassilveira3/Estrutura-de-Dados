#include "filaenc.h"
#include <iostream>

FilaEncadeada::FilaEncadeada() : Fila(){
    frente = new TipoCelula;
    tras = frente;
}

FilaEncadeada::~FilaEncadeada(){
    Limpa();
    delete frente;
}

void FilaEncadeada::Enfileira(TipoItem item){
    TipoCelula *nova;
    nova = new TipoCelula();
    nova->item = item;
    tras->prox = nova;
    tras = nova;
    tamanho++;
}

TipoItem FilaEncadeada::Desenfileira(){
    TipoCelula *p;
    TipoItem aux;

    if (tamanho == 0)
        throw "Fila está vazia!";

    aux = frente->prox->item;
    p = frente;
    frente = frente->prox;
    delete p;
    tamanho--;

    return aux;
}

void FilaEncadeada::Limpa(){
    TipoCelula *p;
    p = frente->prox;

    while(p!=0){
        frente->prox = p->prox;
        delete p;
        p = frente->prox;
    }
    
    tamanho = 0;
    tras = frente;
}

void FilaEncadeada::Imprime(){
    TipoCelula *p;
    p = frente->prox;

    while (p!=0) {
        p->item.Imprime();
        std::cout << std::endl;
        p = p->prox;
    }
}
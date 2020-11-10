#include <iostream>
#include "includes/pilha.h"
#include "includes/pilhaenc.h"
#include "includes/fila.h"
#include "includes/filaenc.h"
#include "includes/lista.h"
#include "includes/listaenc.h"
#include "includes/tipoitem.h"

int main(){
    PilhaEncadeada naves;
    ListaEncadeada emcombate;
    FilaEncadeada avariadas;
    TipoItem x;

    int tam_frota, num_naves;

    std::cin >> tam_frota;

    for(int i = 0;i < tam_frota;i++){
        std::cin >> num_naves;
        x.SetChave(num_naves);
        naves.Empilha(x);
    }

    int operador;

    while(scanf("%d", &operador) != EOF){
        switch (operador){
        case 0: { //Manda a nave mais apta pra combate
            TipoItem combate = naves.Desempilha();
            emcombate.InsereInicio(combate);
            std::cout << "nave " << combate.GetChave() << " em combate" << std::endl;
            break;
        }
        case -1: { //Nave avariada foi consertada
            TipoItem consertou = avariadas.Desenfileira();
            naves.Empilha(consertou);
            std::cout << "nave " << consertou.GetChave() << " consertada" << std::endl;
            break;
        }
        case -2: { //Imprime naves fora de combate
            naves.Imprime();
            break;
        }
        case -3: { //Imprime naves avariadas
            avariadas.Imprime();
            break;
        }
        default: { //Nave avariou
            TipoItem nave_av;
            nave_av.SetChave(operador);

            int posicao = emcombate.Pesquisa(nave_av.GetChave());
            TipoItem avariou = emcombate.RemovePosicao(posicao);
            avariadas.Enfileira(avariou);
            std::cout << "nave " << nave_av.GetChave() << " avariada" << std::endl;
            break;
        }
        };
    }

    return 0;
}

/*
    TipoItem nave_av;
    nave_av.SetChave(operador)

    int posicao = emcombate.Pesquisa(nave_av.GetChave());
    emcombate.RemovePosicao(posicao);
    avariadas.Enfileira(operador);
    std::cout << "nave " << nave_av.GetChave() << " avariada" << std::endl;
*/

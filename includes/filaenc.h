#include "fila.h"
#include "tipocelula.h"

class FilaEncadeada : public Fila{
public:
    FilaEncadeada();
    virtual ~FilaEncadeada();
    void Enfileira(TipoItem item);
    TipoItem Desenfileira();
    void Limpa();
    void Imprime();
private:
    TipoCelula* frente;
    TipoCelula* tras;
};
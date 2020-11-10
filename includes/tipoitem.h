#ifndef tipoitem_h
#define tipoitem_h

typedef int TipoChave;

class TipoItem{
public:
    TipoItem();
    TipoItem(TipoChave c);
    void SetChave(TipoChave c);
    TipoChave GetChave();
    void Imprime();

private:
    TipoChave chave;
};

#endif
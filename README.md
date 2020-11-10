# TP1-Estrutura-de-Dados
Primeiro trabalho prático sobre estrutura de dados, onde o foco foi as três estruturas mais importantes (lista, pilha e fila)

O objetivo deste trabalho é praticar os conceitos relacionados à estruturas de dados elementares para
resolver o problema apresentado a seguir: o imperador Vader deseja saber e controlar as naves que
comp~oem a sua frota intergaláctica de batalha. Para tal, ele necessita de um sistema computacional
que as organize em tr^es estruturas, listadas a seguir:
    Preparação para a batalha: antes de um combate, as naves s~ao posicionadas pelo imperador
de acordo com a sua aptid~ao para a batalha. São que Vader tem uma peculiaridade: ele posiciona
as naves em ordem inversa. Ou seja, a primeira nave que ele informará para o sistema é a
menos apta e, consequentemente, deve ser a última a entrar, de fato, em batalha. Da
mesma maneira, a última nave informada deve ser a primeira a entrar em batalha;
    Combate: o imperador necessita de um controle para as naves que entrar~ao em combate. As
naves entram em batalha com um comando de Vader. Dado o comando para entrar em combate,
a nave selecionada deve ser a mais apta que está aguardando, baseado no posicionamento
armazenado na estrutura de preparação para a batalha;
    Nave avariada: Como em toda batalha, as naves podem ser avariadas. Uma vez que seja
reportada que a nave sofreu avaria, ela deve ser excluída da estrutura de naves em combate e ser
incluída na estrutura de avaria. Uma vez avariada, a nave tentará ser consertada pela equipe de
manutenção do imperador. É importante frisar que, dadas duas naves, nave1 e nave2, se a nave1
foi avariada antes da nave2, ent~ao a nave1 será consertada antes da nave2. Ou seja: as naves
avariadas primeiro s~ao consertadas primeiro. Uma vez que a equipe de manutenção avisa que uma
nave foi consertada, a nave passa a aguardar a ordem do imperador para entrar novamente em
combate, tendo prefer^encia sobre todas as outras que já estão aguardando.

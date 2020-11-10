CC= g++
CFLAGS= -Wall -c
INC= -I includes/

tp1: main.cpp listaenc.o filaenc.o pilhaenc.o tipocelula.o tipoitem.o
	$(CC) main.cpp listaenc.o filaenc.o pilhaenc.o tipocelula.o tipoitem.o -o tp1
	
listaenc.o: src/listaenc.cpp
	$(CC) $(CFLAGS) $(INC) src/listaenc.cpp
	
filaenc.o: src/filaenc.cpp
	$(CC) $(CFLAGS) $(INC) src/filaenc.cpp

pilhaenc.o: src/pilhaenc.cpp
	$(CC) $(CFLAGS) $(INC) src/pilhaenc.cpp

tipocelula.o: src/tipocelula.cpp
	$(CC) $(CFLAGS) $(INC) src/tipocelula.cpp

tipoitem.o: src/tipoitem.cpp
	$(CC) $(CFLAGS) $(INC) src/tipoitem.cpp
	
test: $(EXEC)
	@bash run_tests.sh ./tp1 tp1.testresult

clean:
	rm -rf *.o tp1

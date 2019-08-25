Estruturas de dados com acesso do tipo FILA

Conceito: FIFO - "First In First Out"

	O acesso aos elementos da FILA pode ocorrer em duas extremidades, sendo que 
	- Inserção apenas ao final
	- Remoção apenas no inicio
	
	
	Exemplo do Uso 1 
	- Inicialização - Inicio: Posição 0
					  		  Final -1
					  		  
		Inserindo k					  		  
		   	  [k] [ ] [ ] [ ] [ ]
			   0   1   2   3   4
			
		Inserindo m					  		  
		   	  [k] [m] [ ] [ ] [ ]
			   0   1   2   3   4
			   
		Inserindo e				  		  
		   	  [k] [m] [e] [ ] [ ]
			   0   1   2   3   4
			   		   |
			   		 Final
			   		 
	Retirando um Elemento da FILA :> Retorno K
					  		  
		   	  [m] [e] [ ] [ ] [ ]
			   0   1   2   3   4
			 
			 Retirando : Retorna [m]  
			  [e] [ ] [ ] [ ] [ ]
			   0   1   2   3   4
			   
		Inserindo a					  		  
		   	  [e] [a] [ ] [ ] [ ]
			   0   1   2   3   4
			   
Fila.h

#define MaxPilha 10
	
struct TpFila
{
	int Final;
	char Fila[MaxPilha];
}


Void Inicializa (TpPilha &Fila)

void Inserir (TpFila &Fila, char Elemento)

char Retira (TpFila &Fila)

int Vazia (int Fim)

int Cheia (int Fim)

char RetornaElemInicio (TpFila F)

char RetornoElemFinal (TpFila F)

void ExibeFila (TpFila F)

Impremente
	As funções Associadas Fila.h
	
	Um Programa com as opçoes:
			- Inicialização
			- Inserção;
			- Retirada;
			- Mostrar Elemento do inicio;
			- Mostra elemento do final;
			- Exibe Fila;
			
		Lista de Exercicios no APRENDER.






























			   
			   
			   
			   
			   

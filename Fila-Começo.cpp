#include <conio2.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "Fila.h"

char Menu ()
{
	clrscr();
	printf ("F I L A \n\n");
	printf ("[I] - Inicializar \n");
	printf ("[N] - Insercao \n");
	printf ("[M] - Mostra Elemento do Inicio \n");	
	printf ("[E] - Mostra Elemento do Fim \n");	
	printf ("[R] - Retirada \n");	
	printf ("[X] - Exibe Fila \n");
	printf ("\n[ESC] - Sair");
	return toupper (getche());
}


int main ()
{
	TpFila Fila;
	char Op,Elem;
	do
	{
		Op=Menu();
		switch (Op)
		{
			case 'I' : 
						Inicializa (Fila);
						printf ("Iniciou ! ");getch ();
						break;
			
			case 'N' :
						clrscr();
						printf ("Insercacao: ");
						Elem = getche();
						Inserir (Fila,Elem);
						break;
						
			 case 'M' : 
			 			clrscr();
			 			printf ("Elemento do Inicio: %c",RetornaElemInicio(Fila));
			 			getch();
			 			break;
			 			
			case 'E' : 
						clrscr();
			 			printf ("Elemento do Fim: %c",RetornaElemFim(Fila));
			 			getch();
			 			break;	
			 			
			case 'R': 
					
						clrscr();
						printf ("Retirada ! ");
						Retira (Fila);
						break;
						
			case 'X' :
				
					
						
						printf ("FILA: \n");
						ExibeFila(Fila);
						getch ();
						break;
						
		}
				
	}while (Op!=27);
	
	
	
}

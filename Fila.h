#define MaxPilha 10

struct TpFila
{
	int Final;
	char Fila [MaxPilha];
};

void Inicializa (TpFila &F)
{
	F.Final=-1;

}

void Inserir (TpFila &F, char Elemento)
{
	F.Fila[++F.Final]=Elemento;
}

char Retira (TpFila &F)
{
	char Elem = F.Fila[0];
	for (int i=0;i<F.Final;i++)
		F.Fila[i]=F.Fila[i+1];
		
	F.Final--;
	return Elem;
	
}

char RetornaElemInicio (TpFila F)
{
	return F.Fila[0];
}

char RetornaElemFim (TpFila F)
{
	return F.Fila[F.Final];
}

int Cheia (TpFila F)
{
	return F.Final == MaxPilha-1;
}

int Vazia (TpFila F)
{
	return F.Final == -1;
}

void ExibeFila (TpFila F)
{
	while (!Vazia(F))
	{
		printf ("%c",Retira(F));
	}

}

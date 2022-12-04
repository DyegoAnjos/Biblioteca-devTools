/*Sintaxes
	ToolLinha(): ToolLinha(tamanho da linha)
		Essa função recebe 2 parâmetros, o tamanho da linha e a quantidade de linhas. Essa função é só para criar uma linha divisória, completamente estética.


	ToolPesquisaStr: ToolPesquisaStr(tamanho do vetor, string para comparar, variav�l do vetor)
		
		
	ToolPesquisaInt: ToolPesquisaInt(tamanho do vetor, n�mero inteiro para comparar, variav�l do vetor)
		Compara o valor de um int e de um int dentro de um vetor e retorna a posi��o dele, caso n�o exista ela retorna -1.
		
	ToolPesquisaFloat: ToolPesquisaFloat(tamanho do vetor, n�mero decimal para comparar, variav�l do vetor)
		Compara o valor de um float e de um float dentro de um vetor e retorna a posi��o dele, caso n�o exista ela retorna -1.
*/


void ToolLinha(int tamanho, int quantidade){
	while(quatidade>0){
		printf("\n");
		for(int i=0;i<tamanho;i++)
			printf("-");
		
		quantidade--;
	}
}

int ToolPesquisaStr(int tamanho, char *indice, char *valor){
	for(int i=0;i<=tamanho;i++){
		if(strcmp(indice, valor)==0)
			return i;
	}
	
	return -1;
}

int ToolPesquisaInt(int tamanho, int indice, int valor){
	for(int i=0;i<=tamanho;i++){
		if(valor == indice)
			return i;
	}
	
	return -1;
}

int ToolPesquisaFloat(int tamanho, float indice, float valor){
	for(int i=0;i<=tamanho;i++){
		if(valor == indice)
			return i;
	}
	
	return -1;
}

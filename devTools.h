/*Sintaxes
	ToolLinha(): ToolLinha(tamanho da linha)
		Cria um número de linhas por um tamanho escolhido.

	ToolPesquisaStr: ToolPesquisaStr(tamanho do vetor, string para comparar, variavél do vetor)
		Compara o valor de uma string e de uma string dentro de um vetor, caso não exista elá retorna -1.
		
	ToolPesquisaInt: ToolPesquisaInt(tamanho do vetor, número inteiro para comparar, variavél do vetor)
		Compara o valor de um int e de um int dentro de um vetor e retorna a posição dele, caso não exista ela retorna -1.
		
	ToolPesquisaFloat: ToolPesquisaFloat(tamanho do vetor, número decimal para comparar, variavél do vetor)
		Compara o valor de um float e de um float dentro de um vetor e retorna a posição dele, caso não exista ela retorna -1.
*/


void ToolLinha(int tamanho, int quantidade){
	if(quantidade == 0)
		quatidade=1;
	
	while(quatidade<0){
		printf("\n");
		for(int i=0;i<tamanho;i++)
			printf("-");
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

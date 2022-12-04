# Biblioteca devTools 
## O que é a biblioteca "devTools.h"?

    A biblioteca "devTools" tem algumas funções que fazem coisas padrões e repetitivas para a vida dos programadores. Esse arquivo possui as sintaxes e dicas de como você pode usar essa biblioteca.

## Como usar a "devTools.h"?
    Para usar você precisa adicionar o arquivo para a pasta do seu projeto e usar o comando #include "devTools.h", lembrando que isso é uma referencia relativa então se estiver em uma pasta dentro da do seu arquivo é preciso colocar "nome da pasta"// e se estiver acima ..//

## Aviso! 
- Todas as funções dessa biblioteca começam com a palavra "Tool".
---

### ToolLinha:
Sintaxe: ToolLinha(**int** tamanho da linha, **int** quantidade de linhas);

    Essa função recebe 2 parâmetros, o tamanho da linha e a quantidade de linhas. Essa função é só para criar uma linha divisória, completamente estética.

### ToolPesquisa:
As funções ToolPesquisa são 3 que são para os 3 tipos de varáveis que usamos, tendo o mesmo padrão só adicionando no final:

> ### Str:
>   ToolPesquisaStr(**int** tamanho do vetor, **char** *variável para procurar, **char** *vetor para procurar)
>
>  Compara o valor de uma string e de uma string dentro de um vetor, caso não exista elá retorna -1.
>> ### Int:
>>   ToolPesquisaStr(**int** tamanho do vetor, **int** variável para procurar, **int** vetor para procurar)
>>
>>  Compara o valor de um int e de um int dentro de um vetor e retorna a posição dele, caso não exista ela retorna -1.
>>> ### Float:
>>>ToolPesquisaStr(**int** tamanho do vetor, **float** variável para procurar, **float** vetor para procurar)
>>>
>>> Compara o valor de um float e de um float dentro de um vetor e retorna a posição dele, caso não exista ela retorna -1.

No momento é só isso mas fiquem livres para me dar sugestões e também criar a devTools de vocês, lembrando que essa biblioteca é para a linguagem C/C++.
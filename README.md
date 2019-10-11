# Estrutura De Dados - Alocação Estatica

Este artigo tem como objetivo finalidade auxiliar no processo de aprendizagem de estrutura de dados, utilizando alinguagem C. a ideia aque é um conteudo rapido sobre tema, no final do mesmo a alguns links direncionando para assuntos especificos.

## Mas afinal o que é uma alocação estatica?
Uma alocação estatica é aquela em que os valores são fixo, ou seja não ha uma escalabildade de acordo com o tamanho do arquivo e sim o valor que foi definido durante o desenvolvimento, ela é criada na compilação do programa  se tornando impossivel de ser alterada. Uma outra caracteristica importante é que ela mantem os dados de forma linear.

A seguir vamos ver um resumo sobre vetor e matriz,que por uma forma "natural" ela busca, inseri e remove sem precisar percorer os elementos.


### VETOR
O vetor é uma array(matriz) unilateral que armazena elementos homogenicos e eterogenios em uma unica lina 

```
int v[10];
```
|posição|0,1,2,3,4,5,6,7,8,9|
|elemnto|a,b,c,d,f,g,h,i,g,l|
``` 
for (i = 0; i < 10; ++i) v[i] = 9 - i;
for (i = 0; i < 10; ++i) v[i] = v[v[i]];
```

### PONTEIRO
É uma variavel que aponta para um endereço de outra variavel conforme o tipo correspondente, ficou claro?
para melhor compreenção dos leigos, uma memoria de computador pode  ser ocupda em qualuer lugar 




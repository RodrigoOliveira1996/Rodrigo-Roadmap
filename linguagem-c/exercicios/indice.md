# Índice dos exercicios e uma breve descrição:
---

- [01-exercicio](./01-exercicio/01-exercicio.c) <br>
Descrição: Declaração de variaveis, nome, sexo e salario. Atribui valores. Imprimi resultado na tela.
Conteúdo aprendido: tipos de variaveis, sintaxe básica

- [02-exercicio](./02-exercicio/02-exercicio.c) <br>
Descrição: Programa que lê dados do usuario (Idade, Sexo(M|F), Salario) e escreve na memória
Conteúdo aprendido: Printf, scanf, &variavel, %c, %d, %f.

- [03-exercicio](./03-exercicio/03-execicio.c) <br>
Descrição: Programa que lê Nome, endereço, e CPF. 
Algumas maneiras de como o C guarda texto. bem como, ideias do \0 e \n. e como pesquisar um char (characterer) e subistitui-lo.
Conteúdo aprendido: #define(diretiva de pré-processamento), biblioteca string.h, fgets, sizeof, strlen, strcspn, 

- [04-exercicio](./04-exercicio/04-exercicio.c) <br>
Descrição: Programa que faz operações aritméticas básicas com dois numeros solicitados do usuario:
    - soma +
    - subtração -
    - multiplicação *
    - divisão / (com numero float)
    - divisão interia /
    - resto da divisão %
Conteúdo aprendido: o principal - para uma divisão real, pelo menos um dos numeros da divisão precisa ser float.

- [05-exercicio](./05-exercicio/05-exercicio.c) <br>
Descrição: Programa que apresenta algumas funcionalidades da biblioteca math.h
    - arredondamento para cima - ceil(numreal)
    - arredondamento para baixo - floor(numreal)
    - raiz quadrada de um numero ineiro - sqrt(inteiro)
    - calcular expoente - pow(num, 2)
Conteúdo aprendido: no calculo de raiz quadrada e expoente, sempre devolve float. Faltou treinar outras funcionalidades.

## Condicionais
Até o exercicio 5 percebemos algumas coisas que o computador pode fazer:
- imprimi um valor na tela
- lẽ um dado e apresentar esse dado
- fazer operações matemáticas.
Um computador tambem pode tomar decisões de Sim ou Não e seguir determinado percurso. 
Os próximos exercicios treinam essa caracteristica.

- [06-exercicio](./06-exercicio/06-exercicio.c) <br>
Descrição: Programa que verifica se um número é par ou ímpar. 
Se um numero for dividido por dois e o resultado do resto de sua divisão for zero, então consideramos esse número par, caso contrario seria ímpar.
Conteúdo aprendido: if, else. Usamos o % para definir se x%2 igual a zero entao par. Se nao...
### variações do exercício 06 para chegar ao mesmo resultado
- [Variação-01](./06-exercicio/01-variacao.c) <br>
Aqui vocẽ adiciona uma variavel booleana. Numa variavel booleana o zero significa falso, e o contrario, verdadeiro.
se o resto da divisao for zero entao é falso. dai voce monta o if e else baseado nisso.
- [Variação-02](./06-exercicio/02-variacao.c) <br>
Para transferir essa sintaxe pro portugues talvez fique um pouco confuso.
Aqui voce utiliza o not True, entao falso. é o sibolo! - if(!eh-impar).
se a variavel declarada (é impar) for diferente de zero ela é verdadeira. se nao verdadeira? é falsa, pois tem valor zero.

- [07-exercicio](./07-exercicio/07-exercicio.c) <br> 
Descrição:programa que calcula media final de acordo com as diretrizes da escola e escreve a sua media final e situação:
aprovado, recuperação, reprovado. 6 ou mais, aprovado, 4 ou menos, reprovado. 
as diretrizes estao descritas no exercicio.
é um programa qe envolve algoritmos de operações de arimeticas e condicionais if, else if, else.
Conteúdo aprendido: logica de programação para questoes de maematica.

 - [08-exercicio](./08-exercicio/08-exercicio.c) <br>
Descrição: programa que le tres valores e imprimi que tipo de triangulo é, ou se nao é um triangulo.
adiciona na conta operadores logicos para atribuir algumas condições refente aos valores do triangulo
Conteúdo aprendido: &&, |.

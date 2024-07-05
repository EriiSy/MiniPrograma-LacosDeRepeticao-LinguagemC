#include <stdio.h> 
#include <math.h>


float lerFloat(const char* mensagem){ 
    float valor; 
    printf("%s", mensagem); 
    while(scanf("%f", &valor) != 1){
        printf("Entrada invalida, por favor digite um numero\n");
        while(getchar() != '\n'); 
        printf("%s", mensagem);
    }
    return valor; 
}
int lerInteiro(const char* mensagem){

    int valor; 
    printf("%s", mensagem); 
    while (scanf("%d", &valor) != 1){
        printf("Entrada inválida, por favor insira um numero inteiro"); 
        while (getchar() != '\n');
        printf("%s", mensagem); 
    }
    return valor; 
}
unsigned long long calcularFatorial(unsigned long long num) {
    unsigned long long fatorial = 1;
    for (unsigned long long i = 1; i <= num; i++) {
        fatorial *= i;
    }
    return fatorial;
    }
//Uma maneira de impedir que um valor que não seja inteiro ou float seja inserido em uma questão que pede apenas inteiro vice-versa.


void questaoA(){
    
    int i, resultado; 
    char start[100];




    printf("a) Elaborar um programa que apresente como resultado os quadrados armazenados na"
    " memoria dos numeros inteiros existentes na faixa de valores de 15 a 200.\n\n");



    printf("Ola, aperte qualquer tecla para iniciar: ");
    scanf("%s", start);

    for (i=15; i<=200; ++i){
        resultado = i*i;
        printf("%d^2 = %d\n", i,resultado); 

    }
}
void questaoB(){
    
    float NUM, resultado;
    int i;  

    printf("b) Elaborar um programa que mostre os resultados da tabuada de um número qualquer, a"
    " qual deve ser apresentada de acordo com sua forma tradicional.\n\n");


    NUM = lerFloat("Digite um numero qualquer que deseja ver na tabuada tradicional: ");

    for (i=0; i<=10; ++i){

        resultado = NUM * i; 
        printf("%.2f x %d = %.2f \n", NUM,i,resultado);
    }

}
void questaoC(){
    int NUM=0;
    int soma=0; 
    char start[100];

    printf("c) Construir um programa que apresente a soma dos cem primeiros numeros naturais (1 + 2"
    " + 3 +...+ 98 + 99 + 100). \n\n");  

    printf("Iniciar a soma de 1 a 100, digite qualquer tecla: ");
    scanf("%s", start);

    for (NUM=1; NUM<=100; ++NUM){
        printf("%d+", NUM);
        soma += NUM;
    }

    printf("\nSoma total de 1 a 100: %d", soma); 
}
void questaoD(){
    int NUM=0;
    int NUMpar=2;
    int soma=0; 
    char start[100];

    printf("d) Elaborar um programa que apresente o somatorio dos valores pares existentes na faixa de"
    " 1 ate 500.\n\n"); 


    printf("Iniciar a soma de 1 a 500, digite qualquer tecla: ");
    scanf("%s", start);

    for (NUM=1; NUM<=500; ++NUM){
        NUMpar = NUM%2;
        if(NUMpar == 0){ 
        printf("%d+", NUM);
        soma += NUM;
        } else{
            //ignore
        }
    }

    printf("\nSoma total de 1 a 500 dos numeros pares e: %d", soma); 
}
void questaoE(){ 
    int verificarNUM;
    int NUM=0; 
    char start[100];

    printf("e) Elaborar um programa que apresente todos os valores numericos inteiros impares situados"
    " na faixa de 0 a 20. Sugestao: para verificar se o valor numerico e impar, dentro do laço de"
    " repeticao, fazer a verificacao logica dessa condicao com a instrucao se/fim_se dentro do"
    " proprio laco, perguntando se o valor numerico do contador e impar (se o resto do numero"
    " dividido por 2 e diferente de zero); sendo, mostre-o; nao sendo, passe para o proximo valor"
    " numerico.\n\n");

    printf("Digite algo para apresentar todos os valores numericos inteiros impares situados de 0 a 20: ");
    scanf("%s", start);

    do{     
        ++NUM;
        verificarNUM = NUM % 2;
        if(verificarNUM == 1){
            printf("%d \n", NUM); 
        }
        else{
            //ignore 
        }
    }while(NUM < 20); 
}
void questaoF(){

    int verificarNUM;
    int NUM=1; 
    char start[100];

    printf("f) Construir um programa que apresente todos os valores numericos divisiveis por 4 e"
    " menores que 200. Sugestao: a variavel que controla o contador do laço deve ser iniciada"
    " com valor 1. \n\n");

    printf("Digite algo para apresentar todos os valores numericos inteiros divisiveis por 4 de 1 a 200: ");
    scanf("%s", start);

    do{     
        ++NUM;
        verificarNUM = NUM % 4;
        if(verificarNUM == 0){
            printf("%d \n", NUM); 
        }
        else{
            //ignore 
        }
    }while(NUM < 200); 


}
void questaoG(){
    int expoente;  
    double resultado, base=3;
    char start[100];


    printf("g) Elaborar um programa que apresente os resultados das potencias do valor de base 3,"
    " elevado a um expoente que varie do valor 0 ate o valor 15. O programa deve apresentar os"
    " valores 1, 3, 9. 27, ..., 14.348.907. Sugestao: leve em consideraçao as definicoes matematicas"
    " do calculo de potencia, em que qualquer valor numerico diferente de zero elevado a zero e"
    " 1, e todo valor numérico elevado a 1 e ele proprio. Nao use o operador aritmetico de"
    " exponenciacao apresentado no Capítulo 3; resolva o problema com a tecnica de laço.\n\n");

    printf("Aperte qualquer tecla para iniciar: ");
    scanf("%s", start);
    
    for (expoente=0; expoente<=15; ++expoente){
        if (expoente == 0){
            resultado = 1; 
        }
        else{ 
            resultado = 1;
            for (int i=1; i <= expoente; ++i){
                resultado *= base; 
            }
        }
        printf("3^%d = %.0f\n", expoente, resultado); 

    }


}
void questaoH(){

    int E;  
    double resultado,B;


    printf("h) Escrever um programa que apresente como resultado a potencia de uma base qualquer"
    " elevada a um expoente qualquer, ou seja, de BE, em que B e o valor da base e E o valor do"
    " expoente. Considere apenas a entrada de valores inteiros e positivos, ou seja, de valores"
    " naturais. Sugestao: não utilize o formato “base ↑ expoente”, pois e uma solução muito"
    " trivial. Use a técnica de laco, em que o valor da base deve ser multiplicado o numero de"
    " vezes determinado no expoente\n\n");




    B = lerFloat("Digite uma base qualquer: ");
    E = lerInteiro("Digite um expoente qualquer: ");
    if (E == 0){
            resultado = 1; 
    }
    else{ 
        resultado = 1;
        for (int i=1; i <= E; ++i){
            resultado *= B; 
        }
    }
        printf(" O resultado de %.0f^%d e %.0f\n", B,E, resultado); 

}
void questaoI(){
    int NUM = 1;
    int start;
    int ATUAL = 0, ANTERIOR = 1, PROXIMO;



    printf("i) Escrever um programa que apresente os valores da sequencia numerica de Fibonacci ate o"
    " decimo quinto termo. A sequencia de Fibonacci e formada pelos valores numericos 0, 1, 1,"
    " 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, ... etc., obtendo-se o proximo termo a partir da"
    " soma do termo atual com o anterior sucessivamente ate o infinito se a sequencia não for"
    " interrompida, sendo determinada a partir da formula Fn = Fn-1 + Fn-2. Utilize para este"
    " exercicio as variaveis ATUAL, ANTERIOR e PROXIMO.\n\n");



    start = lerInteiro("Digite um numero ate onde deseja que a"
    "sequencia de Fibonacci va: ");


    do {
        NUM++;
        PROXIMO = ATUAL + ANTERIOR; 
        printf("%d, ", PROXIMO);

        ANTERIOR = ATUAL;
        ATUAL = PROXIMO;

    } while (NUM <= start);
}
void questaoJ(){

    float C,F;
    char start[100];
    printf("j) Elaborar um programa que apresente os valores de conversao de graus Celsius em graus"
    " Fahrenheit, de dez em dez graus, iniciando a contagem em dez graus Celsius e finalizando"
    " em cem graus Celsius. O programa deve apresentar os valores das duas temperaturas.\n\n");

    printf("Digite alguma coisa para iniciar: ");
    scanf("%s", start);

    do{ 
    C+=10;    
    F=(C*1.8)+32;
    printf("%.0f Graus Celsius em Fahrenheit = %.2f \n", C,F);   
    }while(C < 100);

}
void questaoK() {

    // Gostaria de uma ajuda nessa questão, pois o formato escolhido para os graos não é capaz de aguentar 18 quintilhões de arroz, 
    // tem alguma outra forma para evitar o problema?

    unsigned long long graosAtuais = 1, somaTotal = 0;
    int quadrado; char start[100];

    printf("k) Escrever um programa que calcule e apresente o somatorio do numero de graos de trigo"
    " que se pode obter em um tabuleiro de xadrez, obedecendo a seguinte regra: colocar um"
    " grao de trigo no primeiro quadro, e nos quadros seguintes, o dobro do quadro anterior. Ou"
    " seja, no primeiro quadro coloca-se um grao, no segundo quadro colocam-se dois graos"
    " (neste momento tem-se tres graos), no terceiro quadro colocam-se quatro graos (tendo neste"
    " momento sete graos), no quarto quadro colocam-se oito graos (tendo-se, entao, 15 graos),"
    " ate atingir o sexagesimo quarto quadro.\n\n");

    printf("Digite alguma coisa para iniciar: ");
    scanf("%s", start);

    for (quadrado = 1; quadrado <= 64; quadrado++) {
        printf("Com %d Quadrados temos: %llu graos\n", quadrado, graosAtuais);
        
        somaTotal += graosAtuais;
        graosAtuais *= 2; 

        printf("Soma total de graos atual: %llu \n\n", somaTotal);

    }

    printf("\nSomatorio total de graos: %llu\n", somaTotal);
    printf("Essa questão K confessou que precisa de ajuda pois é muito arroz");
}
void questaoL(){
        unsigned long long somaTotal = 0, fatorial;
        int num, contagem;
        

        printf("l) Elaborar um programa que leia quinze valores numericos inteiros e no final apresente o"
        " somatorio da fatorial de cada valor lido.\n\n");


        for (contagem = 0; contagem < 15; contagem++) {
            num = lerInteiro("Digite um numero inteiro: ");
            fatorial = calcularFatorial(num);
            printf("Fatorial de %d: %llu\n", num, fatorial);
            somaTotal += fatorial;
        }
        printf("\nA Soma dos fatoriais e %llu\n", somaTotal);
}
void questaoM(){

    float num, media, somaTotal = 0;
    int contagem;

    printf("m) Elaborar um programa que leia dez valores numericos reais e apresente no final o"
    " somatorio e a media dos valores lidos.\n\n");


    for (contagem = 0; contagem < 10; contagem++) {
    
    num = lerFloat("Digite um valor real: ");
    somaTotal+=num;

    }    
    media = somaTotal/10; 

    printf("A soma total dos dez numeros e: %.2f\n", somaTotal); 
    printf("A media dos valores lidos e: %.2f\n", media);


}
void questaoN(){

    float num, media, somaTotal = 0;
    int contagem=0, leitura;

    printf("n) Elaborar um programa que leia sucessivamente valores numericos e apresente no final o"
    " somatorio, a media e o total de valores lidos. O programa deve ler os valores enquanto o"
    " usuario estiver fornecendo valores positivos. Ou seja, o programa deve parar quando o"
    " usuario fornecer um valor negativo (menor que zero).\n\n");


    do{

    num = lerFloat("Digite um valor real e positivo, nunca digite um negativo: ");
    somaTotal+=num;
    leitura = contagem++;
    //Observação: Desconsidera-se que o valor negativo é lido
    } while(num>=0);

    media = somaTotal/leitura; 
    
    printf("A soma total dos numeros e: %.2f\n", somaTotal); 
    printf("A media dos valores lidos e: %.2f\n", media);
    printf("O total de valores lidos e: %d\n", leitura);
    
}
void questaoO(){
    int contagem = 0, num = 0;
    char start[100]; 


    printf("o) Construir um programa que apresente como resultado a fatorial dos valores impares"
    " situados na faixa numerica de 1 até 10.\n\n");

    printf("Aperte qualquer tecla para iniciar: ");
    scanf("%s", start);

    while (contagem < 10) {
        num++;
        if (num % 2 == 1) { 
            unsigned long long fatorial = calcularFatorial(num); 
            printf("Fatorial de %d é: %llu\n", num, fatorial); 
        }
        contagem++; 
    }
}
void questaoP(){

    int contagem = 50, soma = 0, num = 50;
    float media; 
    char start[100]; 

    printf("p) Elaborar um programa que apresente os resultados da soma e da media aritmetica dos"
    " valores pares situados na faixa numerica de 50 ate 70.\n\n");


    printf("Aperte qualquer tecla para iniciar: ");
    scanf("%s", start);

    while (contagem <= 70) {
        num++;
        if (num % 2 == 0) {
            printf("+%d", num);
            soma += num;
        }
        media = soma/10; 
        contagem++;
    }
    printf("\nA soma dos valores pares entre 50 e 70 e: %d\n", soma);
    printf("\nA media dos valores pares entre 50 e 70 e: %.2f\n", media);
}
float chamarComodos() {
    int comodos, quantiaSalas, escolha,loop=1, loopGeral=1;
    char nome[50];
    float largura, comprimento, area, areaTotal = 0;

        do{ 
            printf("\nDigite o numero total de comodos na residencia: ");
            scanf("%d", &comodos);

            for (quantiaSalas = 1; quantiaSalas <= comodos; quantiaSalas++) {
                printf("\nDigite o nome do comodo %d: ", quantiaSalas);
                scanf("%s", nome);
                
                printf("\nDigite a largura do comodo %d em metros: ", quantiaSalas);
                scanf("%f", &largura);

                printf("Digite o comprimento do comodo %d em metros: ", quantiaSalas);
                scanf("%f", &comprimento);

                area = largura * comprimento;
                areaTotal += area;
                printf("Area do comodo %s: %.2f metros quadrados\n", nome, area);
            }

                printf("Deseja continuar colocando comodos? Observe que este somara com os comodos anteriores.\n Digite 1 para sim ou 0 para nao: ");
                do{
                escolha = lerInteiro("");
                if (escolha == 1) {
                    areaTotal += chamarComodos(); 
                    loop = 0;
                }
                else if(escolha == 0){
                    loop = 0;
                    loopGeral = 0;
                }else{
                    printf("Número inválido, por favor digite entre 1 ou 0: ");
                }
                }while(loop);

            return areaTotal;

        }while(loopGeral=1);
    }
void questaoQ() {
    int escolha;
    float areaTotal;
    int loop=1;
     printf("q) Escrever um programa que possibilite calcular a area total em metros de uma residencia com os"
    " comodos sala, cozinha, banheiro, dois quartos, area de servico, quintal, garagem, entre outros que"
    " podem ser fornecidos ao programa. O programa deve solicitar a entrada do nome, da largura e do"
    " comprimento de um determinado comodo. Em seguida, deve apresentar a area do comodo lido e"
    " tambem uma mensagem solicitando ao usuario a confirmacao de continuar calculando novos"
    " comodos. Caso o usuario responda 'NAO', o programa deve apresentar o valor total acumulado da"
    " area residencial.\n\n");

    areaTotal = chamarComodos(); 


    printf("Area total da residencia: %.2f metros quadrados\n", areaTotal);
}
void questaoR(){
    float num=0,maior,menor; 
    maior = num; 
    menor = num; 

    printf("r) Elaborar um programa que leia valores positivos inteiros ate que um valor negativo seja"
    " informado. Ao final devem ser apresentados o maior e o menor valores informados pelo"
    " usuario.\n\n");
    
    do{

        num = lerFloat("Digite um valor real e positivo, nunca digite um negativo: ");
        if (num < 0){
            break;
        }
        else if (num >= 0){ 
            if (num > maior){
                maior=num;
            }
            if (num < maior){
                menor = num; 
            }
        }
    //Observação: Desconsidera-se que o valor negativo é lido
    } while(1);
      

    printf("O maior valor digitado foi: %.1f", maior);
    printf("O menor valor digitado foi: %.1f", menor);
}
void questaoS(){
    int dividendo, divisor, quociente, resto;

    printf("s) Elaborar um programa que apresente o resultado inteiro da divisao de dois numeros"
    " quaisquer, representando o dividendo e o divisor da divisao a ser processada. Sugestao:"
    " para a elaboracao do programa, nao utilize o operador aritmetico de divisao com quociente"
    " inteiro div. Use uma solucao baseada em laço. O programa deve apresentar como resultado"
    " (quociente) quantas vezes o divisor cabe no dividendo.\n\n");

    dividendo = lerInteiro("\nDigite o dividendo: ");
    divisor = lerInteiro("\nDigite o divisor: "); 
    
    if (divisor == 0){
        printf("Não é possível dividir por Zero");
       
    }
    else{

    quociente = 0; 
    resto = dividendo; 

    while (resto >= divisor) {
    resto -= divisor; 
    quociente++; 
    }
    printf("O resultado da divisao de %d"
    " por %d\nTem por resultado o quociente: %d com resto: %d.\n", 
    dividendo, divisor, quociente, resto);
    }

}
void questaoT(){
    int i; 
    char start[100];

    printf("t) Elaborar um programa que apresente os quadrados sem armazená-los na memória dos"
    " valores inteiros existentes na faixa de valores de 15 a 200 com saltos de 3 em 3\n\n");

    printf("Ola, aperte qualquer tecla para iniciar: ");
    scanf("%s", start);

    for (i=15; i<=200; i += 3){
        printf("%d^2 = %d\n", i,i*i); 
    }
}
//Questões de A até T feitas com muito carinho e muito suor

void menu(){
    printf("\nEscolha a questao que deseja ver a seguir: \n");
 
        printf("\n(a) Quadrados de 15 a 200");
        printf("\n(b) Tabuada tradicional");
        printf("\n(c) Soma dos 100 primeiros naturais:");
        printf("\n(d) Soma dos pares ate 500:");
        printf("\n(e) Impares de 0 a 20");
        printf("\n(f) Divisiveis por 4 menores que 200");
        printf("\n(g) Potencias de 3 até 3^15");
        printf("\n(h) Potencia B^E com laco");
        printf("\n(i) Sequencia de Fibonacci ate o 15 termo");
        printf("\n(j) Conversao Celsius para Fahrenheit:");
        printf("\n(k) Graos de trigo no tabuleiro");
        printf("\n(l) Somatorio dos fatoriais de 15 numeros:");
        printf("\n(m) Somatorio e media de 10 valores reais");
        printf("\n(n) Somatorio e media de valores positivos");
        printf("\n(o) Fatoriais de impares de 1 a 10");
        printf("\n(p) Soma e media de pares de 50 a 70");
        printf("\n(q) Area total de uma residencia");
        printf("\n(r) Maior e menor valor positivo:");
        printf("\n(s) Divisao inteira com laco");
        printf("\n(t) Quadrados com salto de 3");

    printf("\n\nDigite apenas a letra da questao: ");
}
// Menu, onde se encontra todo os textos das questões

//*********************************************************

void limparTela() { 
    for (int i = 0; i < 200; i++) {
        printf("\n");
    }
}
// Uma forma de 'limpar' a tela, uma vez que outros sistemas operacionais não consigam 
// rodar alguns comandos como system('cls') no Linux.

//*********************************************************
void lerQuestao(char escolha){
     
     switch (escolha) {
            case 'a': questaoA();break;
            case 'b': questaoB();break;
            case 'c': questaoC();break;
            case 'd': questaoD();break;
            case 'e': questaoE();break; 
            case 'f': questaoF();break;
            case 'g': questaoG();break;
            case 'h': questaoH();break;
            case 'i': questaoI();break;
            case 'j': questaoJ();break;
            case 'k': questaoK();break;
            case 'l': questaoL();break;
            case 'm': questaoM();break;
            case 'n': questaoN();break;
            case 'o': questaoO();break;
            case 'p': questaoP();break;
            case 'q': questaoQ();break;
            case 'r': questaoR();break;
            case 's': questaoS();break;
            case 't': questaoT();break;
        default:
            printf("\nValor invalido, por favor insira uma letra minuscula de (a) a (t): ");
            break;
        }
}
// Optei por separar dessa vez as questões, para que assim o código fique mais limpo e facilite algumas iterações e utilizações futuras


void page(){
    char escolha;
    int loop=1;
    int voltar;
    int validacao;
    menu();

      do{
        scanf(" %c", &escolha);
        while (getchar() != '\n'); // limpa o buffer de entrada

        validacao = (escolha >= 'a' && escolha <= 't');
        
        if (validacao){ 
            do{
                    limparTela();
                    lerQuestao(escolha);
                    int voltarValido = 1;
                    printf("\n\nDeseja voltar ao Menu? (1)-Sim/ (0)-Nao. /\nPara repetir a questao, aperte (2) \n: ");
                    do{
                        voltar = lerInteiro("");
                        if (voltar == 1 || voltar == 0 || voltar == 2 ){
                            voltarValido = 0; 
                        } else{
                            printf("\nDigito inválido: ");
                            voltarValido = 1; 
                        }
                    }while(voltarValido);

                    if (voltar == 2){
                        limparTela();
                    }else if (voltar == 1){
                        limparTela();
                        menu();
                        break;
                    }else if (voltar==0){
                        limparTela();
                        printf("\nFinalizando o programa...Obrigado pela disponibilidade!");
                        loop = 0; 
                        break;
                    }
                }while(voltar==2);

            }else{
                printf("\nValor invalido, por favor insira uma letra minuscula de (a) a (t): ");
            }
                //Toda a funcionalidade do mini-programa se encontra aqui. :)
        }while(loop);
}

// Aqui é onde está todo o funcionamento do código em relação à ir para uma questão, voltar, repetir e finalizar o programa. 
//*********************************************************

int main(){
    page();
    return 0;
}
// Obrigado por vir aqui
// assinado por: EriiSy
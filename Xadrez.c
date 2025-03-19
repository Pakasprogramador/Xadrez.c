#include  <stdio.h>


int main(){
//variaveis criadas e inicializadas :)

int torre,bispo,rainha,lop,lop2,direcao,direcao2;
lop = 1;
lop2 = 1;
torre = 5;
bispo = 5;
rainha = 8;
direcao = 1;
direcao2 = 0;

//Saida de dados  e logica do jogo
printf("Bem vindo ao jogo de Xadrez \n\n");
printf("Movimento da Torre:\n");


//Torre
while (lop < 2){
if(direcao == 1)
{
printf("\n\nA Torre andou %d casas para a Direita\n\n",torre);
}else if (direcao == 0)
{
printf("\n\nA Torre andou %d casas para a Esquerda\n\n",torre);
}else if (direcao2 == 1)
{
printf("\n\nA Torre andou %d casas para Cima\n\n",torre);
}else
{
printf("\n\nA Torre andou %d casas para a Baixo\n\n",torre);
}
    lop++;
}

//Bispo
printf("\nMovimento do Bispo:\n");
direcao = 1;
direcao2 = 1;

do 
{
if((direcao == 1) && (direcao2 == 1)){
printf("\n\nO Bispo andou %d casas para Cima e para Direita\n\n",bispo);
}else if ((direcao == 0) && (direcao2 == 1)){
printf("\n\nO Bispo andou %d casas para Cima e para Esquerda\n\n",bispo);
}else if ((direcao == 1) && (direcao2 == 0)){
printf("\n\nO Bispo andou %d casas para Baixo e para Direita\n\n",bispo);
}else {
    printf("\n\nO Bispo andou %d casas para Baixo e para Esquerda\n\n",bispo);
}
lop2++;
}while(lop2 < 2);

//Rainha
direcao = 0;
direcao2 = 1;
printf("\nMovimento da Rainha:\n");
for(lop = 1; lop < 2; lop++){
    if(direcao == 1)
    {
    printf("\n\nA Rainha andou %d casas para a Direita\n\n",rainha);
    }else if (direcao == 0)
    {
    printf("\n\nA Rainha andou %d casas para a Esquerda\n\n",rainha);
    }else if (direcao2 == 1)
    {
    printf("\n\nA Rainha andou %d casas para Cima\n\n",rainha);
    }else 
    {
    printf("\n\nA Rainha andou %d casas para a Baixo\n\n",rainha);
    }
}
printf("\n\nFim do jogo...\n\n",rainha);
    return 0;
}

#include <stdio.h>

int main (){

printf("carta 1\n");

char estado[50]="Amapa";
char codigo[20]="a8";
char cidade[30]="Macapa";
int numero_de_pontos_turisticos=18;
float Area=6.403;
float PIB=11;

printf("estado:%s\n",estado);
printf("codigo:%s\n",codigo);
printf("cidade:%s\n",cidade);
printf("PIB:%f bilhoes\n",PIB);
printf("Area:%d km²\n",&Area);
printf("numero de pontos turisticos:%d\n  ", numero_de_pontos_turisticos);

printf("carta 2\n");

char Estado[15]="Amazonas";
char Codigo[90]="a6";
char Cidade[80]="Manaus";
int Numero_de_pontos_turisticos=10;
float area =1.1401;
float pib=103;

printf("Estado:%s\n", Estado);
printf("Codigo:%s\n", Codigo);
printf("Cidade:%s\n", Cidade);
printf("pib: R$ %f bilhoes\n",pib);
printf("area:%f km²\n", area);
printf("numero de pontos turisticos:%d", Numero_de_pontos_turisticos);

return 0 ;

}
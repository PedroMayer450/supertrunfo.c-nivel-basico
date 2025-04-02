#include <stdio.h>

int main(){

char estado[500] = "Sao Paulo";

char cidade[50] = "Sao Paulo";
int _popul = 11000000 ;
int numerodepontosturisticos = 50 ;
float area = 1.521 ;
float pib = 828.900;
float densidade_populacional = _popul / area ;
float pib_per_capita = _popul / pib ;

printf("carta 1 :\n");

printf("estado:%s\n",estado);
printf("codigo:B8\n");
printf("cidade :%s\n", cidade);
printf("populaçao:%d pessoas\n", _popul);
printf("numero de pontos turisticos :%d\n", numerodepontosturisticos);
printf("area:%.3f km²\n", area);
printf("pib:%.2f bilhoes de reais\n", pib);
printf("densidade populacional:%.2f hab km²\n",densidade_populacional);
printf("pib per capita :%.2f reais\n", pib_per_capita);

char Estado[500] = "Amazonas";
char Cidade[50] = "Manaus";
int _Popul = 2060000 ;
int Numerodepontosturisticos = 10 ;
float Area = 1.401 ;
float Pib = 103.200;
float Densidade_populacional = _Popul / area ;
float Pib_per_capita = _Popul / Pib ;

printf("carta 2 :\n");

printf("estado:%s\n",Estado);
printf("codigo:a8\n");
printf("cidade :%s\n", Cidade);
printf("populaçao:%d pessoas\n", _Popul);
printf("numero de pontos turisticos :%d\n", Numerodepontosturisticos);
printf("area:%.3f km²\n", Area);
printf("pib:%.2f bilhoes de reais\n", Pib);
printf("densidade populacional:%.2f hab km²\n",Densidade_populacional);
printf("pib per capita :%.2f reais\n", Pib_per_capita);

 return 0;
 
}
#include <stdio.h>
main()
{
float totalcaj,totalcli,precio;
int resp1,resp2;
do
{
 do
  {
  printf("Ingrese precio del producto: ", precio);
  scanf("%f", &precio);
  totalcli=totalcli+precio;
  printf("Tiene otro producto? 1/0 \n" );
  scanf("%d", &resp2);
  }while(resp2==1);
totalcaj=totalcli+totalcaj;
printf("El total de su cliente es:%0.0f ", totalcli);
totalcli=0;
printf("¿tiene mas clientes para continuar? 1/0");
scanf("%d", &resp1);
}while(resp1==1);
printf("el total de las ventas fue:%0.0f ", totalcaj);
}

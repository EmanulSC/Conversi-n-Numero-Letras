#include<iostream>
using namespace std;
int main()
{
  int X; //variable entera X
  cout<<"Ingrese un numero del 0 al 999"<<endl; //Ingresar un numero del 0 al 999
  cin>>X; //Lectura de la variable X
  if((X<0)||(X>999)) cout<<"Error de valor ingresado\n";//Si el valor es menor a 0 o mayor a 999, me envia un mensaje de error 
  else //sino se ejecuta la funcionan anterior se hace lo siguiente
  {
    if(X==0)       {cout<<"cero";}//si es igual a cero, se imprime cero
    if(X>=900)     {cout<<"novecientos ";X=X-900;}//si es igual o mayor a novecientos, se imprime novecientos y se resta novecientos para que no se repita.
    else if(X>=800){cout<<"ochocientos ";X=X-800;}//si es igual o mayor a ochocientos, se imprime ochocientos y se resta ochocientos para que no se repita.
    else if(X>=700){cout<<"setecientos ";X=X-700;}//si es igual o mayor a setecientos, se imprime setecientos y se resta setecientos para que no se repita.
    else if(X>=600){cout<<"seicientos ";X=X-600;}//si es igual o mayor a seiscientos, se imprime seiscientos y se resta seiscientos para que no se repita.
    else if(X>=500){cout<<"quinientos ";X=X-500;}//si es igual o mayor a quinientos, se imprime quinientos y se resta quinientos para que no se repita.
    else if(X>=400){cout<<"cuatrocientos ";X=X-400;}//si es igual o mayor a cuatrocientos, se imprime cuatrocientos y se resta cuatrocientos para que no se repita.
    else if(X>=300){cout<<"trescientos ";X=X-300;}//si es igual o mayor a trecientos, se imprime trescientos y se resta trescientos para que no se repita.
    else if(X>=200){cout<<"docientos ";X=X-200;}//si es igual o mayor a docientos, se imprime docientos y se resta docientos para que no se repita.
    else if(X>100) {cout<<"ciento ";X=X-100;}//si es mayor a cien, se imprime ciento mas el resto y se resta cien para que no se repita.
    else if(X==100){cout<<"cien";X=X-100;}//si es igual a cien, se imprime el numeoro cien para que no se repita.
    if(X>90)  {cout<<"noventa y ";X=X-90;}//si es mayor a noventa, se imprime noventa y se resta noventa para que no se repita.
    if(X==90) {cout<<"noventa";X=X-90;}//si es igual a noventa, se imprime noventa y se resta noventa para que no se repita.  
    if(X>80)  {cout<<"ochenta y ";X=X-80;}//si es mayor a ochenta, se imprime ochenta y se resta ochenta para que no se repita.
    if(X==80) {cout<<"ochenta";X=X-80;}//si es igual a ochenta, se imprime ochenta y se resta ochenta para que no se repita.
    if(X>70)  {cout<<"setenta y ";X=X-70;}//si es mayor a setenta, se imprime setenta y se resta setenta para que no se repita.
    if(X==70) {cout<<"setenta";X=X-70;}//si es igual a setenta, se imprime setenta y se resta setenta para que no se repita.
    if(X>60)  {cout<<"sesenta y ";X=X-60;}//si es mayor a sesenta, se imprime sesenta y se resta sesenta para que no se repita.
    if(X==60) {cout<<"sesenta";X=X-60;}//si es igual a sesenta, se imprime sesenta y se resta sesenta para que no se repita.
    if(X>50)  {cout<<"cincuenta y ";X=X-50;}//si es mayor a cincuenta, se imprime cincuenta y se resta cincuenta para que no se repita.
    if(X==50) {cout<<"cincuenta";X=X-50;}//si es igual a cincuenta, se imprime cincuenta y se resta cincuenta para que no se repita.
    if(X>40)  {cout<<"cuarenta y ";X=X-40;}//si es mayor a cuarenta, se imprime cuarenta y se resta cuarenta para que no se repita.
    if(X==40) {cout<<"cuarenta";X=X-40;}//si es igual a cuarenta, se imprime cuarenta y se resta cuarenta para que no se repita.
    if(X>30)  {cout<<"treinta y ";X=X-30;}//si es mayor a treinta, se imprime treinta y se resta treinta para que no se repita.
    if(X==30) {cout<<"treinta";X=X-30;}//si es igual a treinta, se imprime treinta y se resta treinta para que no se repita.
    if(X>20)  {cout<<"veinti ";X=X-20;}//si es mayor a veinte, se imprime veinti y se resta veinte para que no se repita.
    if(X==20) {cout<<"viente";X=X-20;}//si es igual a veinte, se imprime veinte y se resta veinte para que no se repita.
    if(X>=16)     {cout<<"dieci";X=X-10;}//si es igual a diez, se imprime dieci y se resta diez para que no se repita.
    else if(X==15){cout<<"quince";X=X-15;}//si es igual a quince, se imprime quince y se resta quince para que no se repita.
    else if(X==14){cout<<"catorce";X=X-14;}//si es igual a catorce, se imprime catorce y se resta catorce para que no se repita.
    else if(X==13){cout<<"trece";X=X-13;}//si es igual a trece, se imprime trece y se resta trece para que no se repita.
    else if(X==12){cout<<"doce";X=X-12;}//si es igual a doce, se imprime doce y se resta doce para que no se repita.
    else if(X==11){cout<<"once";X=X-11;}//si es igual a once, se imprime once y se resta once para que no se repita.
    else if(X==10){cout<<"diez";X=X-10;}//si es igual a diez, se imprime diez y se resta diez para que no se repita.
    if(X==9)      {cout<<"nueve";X=X-9;}//si es igual a nueve, se imprime nueve y se resta nueve para que no se repita.
    if(X==8)      {cout<<"ocho";X=X-8;}//si es igual a ocho, se imprime ocho y se resta ocho para que no se repita.
    if(X==7)      {cout<<"siete";X=X-7;}//si es igual a siete, se imprime siete y se resta siete para que no se repita.
    if(X==6)      {cout<<"seis";X=X-6;}//si es igual a sies, se imprime sies y se resta sies para que no se repita.
    else if(X==5)     {cout<<"cinco";X=X-5;}//si es igual a cinco, se imprime cinco y se resta cinco para que no se repita.
    else if(X==4)     {cout<<"cuatro";X=X-4;}//si es igual a cuatro, se imprime cuatro y se resta cuatro para que no se repita.
    else if(X==3)     {cout<<"tres";X=X-3;}//si es igual a tres, se imprime tres y se resta tres para que no se repita.
    else if(X==2)     {cout<<"dos";X=X-2;}//si es igual a dos, se imprime dos y se resta dos para que no se repita.
    else if(X==1)     {cout<<"uno";X=X-1;}//si es igual a uno, se imprime uno y se resta uno para que no se repita.
  }
cout<<endl;
return 0;
}
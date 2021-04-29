#include<iostream>
using namespace std;
int main()
{
  int X;
  cout<<"Ingrese un numero del 0 al 999"<<endl;
  cin>>X;
  if((X<0)||(X>999)) cout<<"Error de valor ingresado\n";
  else
  {
    if(X==0)       {cout<<"cero";}
    if(X>=900)     {cout<<"novecientos ";X=X-900;}
    else if(X>=800){cout<<"ochocientos ";X=X-800;}
    else if(X>=700){cout<<"setecientos ";X=X-700;}
    else if(X>=600){cout<<"seicientos ";X=X-600;}
    else if(X>=500){cout<<"quinientos ";X=X-500;}
    else if(X>=400){cout<<"cuatrocientos ";X=X-400;}
    else if(X>=300){cout<<"trescientos ";X=X-300;}
    else if(X>=200){cout<<"docientos ";X=X-200;}
    else if(X>100) {cout<<"ciento ";X=X-100;}
    else if(X==100){cout<<"cien";X=X-100;}
    if(X>90)  {cout<<"noventa y ";X=X-90;}
    if(X==90) {cout<<"noventa";X=X-90;}  
    if(X>80)  {cout<<"ochenta y ";X=X-80;}
    if(X==80) {cout<<"ochenta";X=X-80;}
    if(X>70)  {cout<<"setenta y ";X=X-70;}
    if(X==70) {cout<<"setenta";X=X-70;}
    if(X>60)  {cout<<"sesenta y ";X=X-60;}
    if(X==60) {cout<<"sesenta";X=X-60;}
    if(X>50)  {cout<<"cincuenta y ";X=X-50;}
    if(X==50) {cout<<"cincuenta";X=X-50;}
    if(X>40)  {cout<<"cuarenta y ";X=X-40;}
    if(X==40) {cout<<"cuarenta";X=X-40;}
    if(X>30)  {cout<<"treinta y ";X=X-30;}
    if(X==30) {cout<<"treinta";X=X-30;}
    if(X>20)  {cout<<"veinti ";X=X-20;}
    if(X==20) {cout<<"viente";X=X-20;}
    if(X>=16)     {cout<<"dieci";X=X-10;}
    else if(X==15){cout<<"quince";X=X-15;}
    else if(X==14){cout<<"catorce";X=X-14;}
    else if(X==13){cout<<"trece";X=X-13;}
    else if(X==12){cout<<"doce";X=X-12;}
    else if(X==11){cout<<"once";X=X-11;}
    else if(X==10){cout<<"diez";X=X-10;}
    if(X==9)      {cout<<"nueve";X=X-9;}
    if(X==8)      {cout<<"ocho";X=X-8;}
    if(X==7)      {cout<<"siete";X=X-7;}
    if(X==6)      {cout<<"seis";X=X-6;}
    else if(X==5)    {cout<<"cinco";X=X-5;}
    else if(X==4)    {cout<<"cuatro";X=X-4;}
    else if(X==3)    {cout<<"tres";X=X-3;}
    else if(X==2)    {cout<<"dos";X=X-2;}
    else if(X==1)    {cout<<"uno";X=X-1;}
  }
cout<<endl;
cin.ignore();
return 0;
}
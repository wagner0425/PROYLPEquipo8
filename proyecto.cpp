#include <iostream>
#include <stdlib>
#include <conio>
#include <stdio>
main()
{
bool r=false;
char a;
do
{
cout<<"\t\t\t\tMENU PRINCIPAL\a"<<endl;
cout<<"\t1.- Ingresar una nueva hora de clases"<<endl;
cout<<"\t2.- Ver el horario de hoy"<<endl;
cout<<"\t3.- Ver el horario de la semana"<<endl;
cout<<"\t4.- Salir"<<endl;
cout<<"Elija una opcion"<<endl;
cin>>a;
switch(a)
{
case '1':
cout<<"Entraste en Ingresar una nueva hora de clases"<<endl;
break;
case '2':
cout<<"Entraste en Ver el horario de hoy"<<endl;
break;
case '3':
cout<<"Entraste en Ver el horario de la semana"<<endl;
break;
case '4':
r=true;
break;
default:
cout<<"Opcion Invalida"<<endl;
break;
}
}while(r!=true);

ifstream horario("C:/BC5/BIN/horario.txt");
if(!horario)
{
ofstream horario("C:/BC5/BIN/horario.txt");
}
else
{
ofstream horario("C:/BC5/BIN/horario.txt");
horario.close ();

time_t t1;
struct tm * tm ;
char  fecha[100] ,hora[100],horah[100];

int n, horario, opc

do
{
t=time(NULL);
tm=localtime(&t1);
strftime(fecha,100,"FECHA: %d	%m	%Y",tm);
strftime(hora,100,"HORA: %H:%M:%S",tm;);
strftime(horah,100,"%Hh%M",tm);
cout<<"%s	",fecha);
cout<<"%s	",nota);

cout<<op;
}
while(op==0)
}
getch();
}


#include <iostream>
#include <stdlib>
#include <conio>
#include <stdio>
#include <fstream>
#include <time>

char mat[20], set[20], sem[20], hoi[20], hof[20];
time_t t;
struct tm *tm;
int n, horario, opc;

void ingreso(void)
{
     char ver;
     char hor_tem[5], min_tem[5];
     int hor_ent1, min_ent1;
     int hor_ent2, min_ent2;

     clrscr();






























 do
     {
     		cout << "\t Hora de inicio 00H00 : "; cin >> hoi;
         hor_tem[0]=hoi[0];
         hor_tem[1]=hoi[1];
         hor_tem[2]='\0';
         hor_ent1 = atoi(hor_tem);
         min_tem[0]=hoi[3];
         min_tem[1]=hoi[4];
         min_tem[2]='\0';
         min_ent1 = atoi(min_tem);
     } while (hor_ent1 > 23 || min_ent1 > 59 || hoi[2]!='H');

     do
     {
        do
        {
            cout << "\t Hora de Final 00H00 : "; cin >> hof;
            hor_tem[0]=hof[0];
            hor_tem[1]=hof[1];
            hor_tem[2]='\0';
            hor_ent2 = atoi(hor_tem);
            min_tem[0]=hof[3];
            min_tem[1]=hof[4];
            min_tem[2]='\0';
            min_ent2 = atoi(min_tem);
        } while (hor_ent2 > 23 || min_ent2 > 59 || hof[2]!='H');

        if ((hor_ent2 == hor_ent1 && min_ent2 > min_ent1) || hor_ent2 > hor_ent1)
        {
          ver = 's';
        }
        else
        {
          cout << "\t Hora no permitida " << endl;
          ver = 'n';
        }
     } while (ver == 'n');










main()
{
char op;

   t = time(NULL);

   do
   {
      clrscr();
      cout << "\t\t\t\t MENU PRINCIPAL\a" << endl;
      cout << "\t 1.- Ingresar una nueva hora de clases" << endl;
      cout << "\t 2.- Ver el horario de hoy" << endl;
      cout << "\t 3.- Ver el horario de la semana" << endl;
      cout << "\t 4.- Salir" << endl;
      cout << "\t Elija una opcion " ;
      cin >> op;
      switch(op)
      {
          case '1':
            ingreso();
          break;

          case '2':
          	horario_hoy();
          break;

          case '3':
          	horario_semana();
          break;

          case '4':
              cout<<"Gracias por utilizar nuestro programa"<<endl;
          break;

          default:
             cout<<"Opcion Invalida\a"<<endl;
          break;
      }
   } while(op!='4');

getch();
}



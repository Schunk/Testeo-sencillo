#include <iostream>
using namespace std;
#ifndef COMANDOS_H_INCLUDED
#define COMANDOS_H_INCLUDED


evento_interaccion(char opcion){

///SERIE DE ELEMENTOS A CHEQUEAR POR LA FUNCION CON MENSAJES UNICOS

switch (opcion)
{
case 'Q': cout<<"Esqueleto\n";          break;
case 'Z': cout<<"Zombie\n";             break;
case '#': cout<<"Roca\n";               break;
case '$': cout<<"Cofre abandonado\n";   break;
case '-':
case '|': cout<<"Puerta\n";             break;
case '&': cout<<"objeto extraño \n";    break;
case ' ': cout<<"Agujero en el piso";   break;
case 'Ç': cout<<"MUERTE INMINENTE!";    break;
}

system("pause>NULL");
}

#endif // COMANDOS_H_INCLUDED

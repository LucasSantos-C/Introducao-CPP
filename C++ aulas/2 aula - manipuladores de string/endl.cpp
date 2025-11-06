#include <iostream>
#include <iomanip>
using namespace std;

//Endl = quebra de linha igual o \n
//Stew(n = número de espaços) = Largura para formatação 
int main(){
    long usuarios1 = 4514400, usuarios2 = 114304000,
         usuarios3 = 105096093, usuarios4 = 3284800,
         usuarios5 = 108096800, usuarios6 = 18068919,
         usuarios7 = 7620480, usuariosTotal = 360985492;
    
    cout << setw(20) << "Região do Mundo " << setw(10) << "Número de usuários de internet em 2008" << endl
    << setw(20)<< "Africa " <<setw(10) << usuarios1 << endl
    << setw(20)<< "Asia " << setw(10) << usuarios2 << endl
    << setw(20)<< "Europa " << setw(10) << usuarios3 << endl
    << setw(20)<< "Oriente Médio " << setw(10) << usuarios4 << endl
    << setw(20)<< "America do Norte " << setw(10) << usuarios5 << endl
    << setw(20)<< "America Latina " << setw(10) << usuarios6 << endl
    << setw(20)<< "Oceania e Australia " << setw(10) << usuarios7 << endl
    << setw(20)<< "Total de usuários " << setw(10) << usuariosTotal << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    short varComSinal = 30000;
    cout << "Valor inicial de varComSinal = " << varComSinal << endl << endl;

    varComSinal += 30000;
    cout << "Valor errado de varComSinal = " << varComSinal << "Sem usar cast\n" << endl;

    varComSinal = 30000;

    int varAposCast;
    varAposCast = int(varComSinal);
    cout << "Re-incializando varComSinal = " << varComSinal << "antes de usar cast\n" << endl;

    varAposCast += 30000;
    cout << "Valor final de varAposCast = " << varAposCast << "depois de usar cast\n" << endl;
    return 0;

}
/* 
  Tipos de Reais:

  float x = 3.1415;
  const float PI = 3.1415E2 (forma exponencial, ou seja, 3.1415 vezes 10² )
  double y = 0.0034; (contém o dobro de bytes de um float comum (8 bytes))
*/

#include <iostream>
#include <limits>

using namespace std;
  //calcular os limites dos tipos de dados

int main(){
    cout << "limite inferior de <char>: " << (int)numeric_limits<char>::min() << endl;
    cout << "limite inferior de <char>: " << (int)numeric_limits<char>::max() << endl;
    cout << "Número de bytes de <char>: " << sizeof(char) << endl;
    cout << "\n";

    cout << "limite inferior de <short>: " << (int)numeric_limits<short>::min() << endl;
    cout << "limite inferior de <short>: " << (int)numeric_limits<short>::max() << endl;
    cout << "Número de bytes de <short>: " << sizeof(short) << endl;
    cout << "\n";

    cout << "limite inferior de <int>: " << (int)numeric_limits<int>::min() << endl;
    cout << "limite inferior de <int>: " << (int)numeric_limits<int>::max() << endl;
    cout << "Número de bytes de <int>: " << sizeof(int) << endl;
    cout << "\n";

    cout << "limite inferior de <long>: " << (int)numeric_limits<long>::min() << endl;
    cout << "limite inferior de <long>: " << (int)numeric_limits<long>::max() << endl;
    cout << "Número de bytes de <long>: " << sizeof(long) << endl;
    cout << "\n";

    cout << "limite inferior de <float>: " << (int)numeric_limits<float>::min() << endl;
    cout << "limite inferior de <float>: " << (int)numeric_limits<float>::max() << endl;
    cout << "Número de bytes de <float>: " << sizeof(float) << endl;
    cout << "\n";

    
    cout << "limite inferior de <double>: " << (int)numeric_limits<double>::min() << endl;
    cout << "limite inferior de <double>: " << (int)numeric_limits<double>::max() << endl;
    cout << "Número de bytes de <double>: " << sizeof(double) << endl;
    cout << "\n";
   
    return 0;
}
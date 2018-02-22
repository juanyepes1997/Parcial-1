#include <iostream> //

using namespace std;
// funcion principal
int main()
{
    float x=0 , y=0 , z= 0 ;
// pedir datos al usuario
    cout << "Ingrese el # 1: " << "   "  ;
    cin >> x ;
    cout << "Ingrese el # 2:"  << "   "  ;
    cin >> y ;
    cout << "Ingrese el # 3: " << "    " ;
    cin >> z ;
// proceso de comparacion
    if  (x>y && x>z)
    {
        cout << "El mayor es el #1" << x ;
    }
    else if (y>x && y>z)
    {
       cout << " EL mayor es el #2" << y ;
    }
    else {
        cout << "EL numero #3 es el mayor " << z ;
    }





    return 0;
}

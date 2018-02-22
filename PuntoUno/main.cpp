#include <iostream> // Bibliotecas

using namespace std;

int main()
// Ingreso de variable
{   int x=0 ;
        cout << "INGRESE UN NUMERO DEL 1 AL 7" << "    " ;
// Lectura de variable
        cin >> x ;
// Operacion if

    if (x==1)
    {
        cout << "Lunes" ;
    }
    else if (x==2)
    {
        cout << "Martes" ;
    }
    else if (x==3)
    {
        cout << "Miercoles" ;
    }
    else if (x==4)
    {
        cout << " Jueves" ;
    }
    else if (x==5)
    {
        cout << "Viernes" ;
    }
    else if (x==6)
    {
        cout << "Sabado" ;
    }
    else if (x==7)
    {
        cout << "Domingo" ;
    }

    return 0;
}

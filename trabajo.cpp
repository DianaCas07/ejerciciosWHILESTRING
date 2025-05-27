#include <iostream>
using namespace std;

int main(){

int hora=0, hprecio=0, salario=0;
string nombre;
char opcion = 's';

    while (opcion =='s'){
        
    cout<<"Ingrese las horas que trabajo: "<<endl;
    cin>>hora;

    cout<<"Ingrese cuanto cuesta la hora: "<<endl;
    cin>>hprecio;

    cout<<"Ingrese su nombre: "<<endl;
    cin>>nombre;

    if (hora<=44)
    {
        salario = (hora*hprecio);
        cout<<nombre << "Su salario es: "<< salario <<endl;
    }
    else
    {
        salario = (44 * hprecio+ 1.5 * hprecio+(hora-44));
        cout<<nombre<< "Su salario es: "<< salario <<endl;

    }
        cout<<"Desea introducir otro dato? (Si/No)"<<endl;
        cin>>opcion;
        
    }
    return 0;
}

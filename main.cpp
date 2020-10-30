#include <iostream>
#include "arreglodinamico.h"
#include "computadora.h"

using namespace std;

int main() {
    ArregloDinamico<Computadora> computadoras;

    Computadora compu01("Windows", "8 GB", "Lenovo", "Negro");
    Computadora compu02("Linux", "16 GB", "Acer", "Gris");
    Computadora compu03("Windows", "5 GB", "HP", "Blanco");

    computadoras<<compu01<<compu02<<compu03<<compu02<<compu02;
    Computadora compu04("Linux", "16 GB", "Acer", "Gris");
    
    ArregloDinamico<Computadora*> ptrs = computadoras.buscar_todos(compu04);
    
    if (ptrs.size()>0)
        for (size_t i=0; i<ptrs.size(); i++) {
            Computadora *c = ptrs[i];
            cout<<*c<<endl;
        }
    else
        cout<<"No existen coincidencias"<<endl;

    /*Computadora *ptr = computadoras.buscar(compu04);

    if (ptr != nullptr)
        cout<<*ptr<<endl;

    else
        cout<<"No existe"<<endl;*/   
}
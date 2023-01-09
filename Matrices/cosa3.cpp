#include <iostream>
#include <string>

using namespace std;

struct mascota{
    string nombre;
    string especie;
    int edad;
    int numPatas;

    void leer()
    {
        cin >> nombre >> especie >> edad >> numPatas;
    }

    void imprimir()
    {
        cout << nombre << " " << especie << " " << edad << " " << numPatas << "\n";
    }
};

int main()
{
    /*
     * Arreglos de structs
    mascota mascotas[3];

    for(int i=0; i<3; i++)
    {
        mascotas[i].leer();
    }

    for(int i=0; i<3; i++)
    {
        cout << "Mascota " << (i+1) << "\n";
        mascotas[i].imprimir();
        cout << "\n";
    }
    */

    int filas,columnas;
    cin >> filas >> columnas;

    mascota matriz[filas][columnas];

    for(int i=0; i<filas; i++)
    {
        for(int j=0; j<columnas; j++)
        {
            matriz[i][j].leer();
        }
    }

    for(int i=0; i<filas; i++)
    {
        for(int j=0; j<columnas; j++)
        {
            cout << "Mascota [" << i << "][" << j << "]\n";
            matriz[i][j].imprimir();
            cout << "\n";
        }
    }

    return 0;
}
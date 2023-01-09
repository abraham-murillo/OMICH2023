#include <iostream>

using namespace std;

int main()
{
    int filas,columnas;
    cin >> filas >> columnas;

    float matriz[filas][columnas];

    for(int i=0; i<filas; i++)
    {
        for(int j=0; j<columnas; j++)
        {
            cin >> matriz[i][j];
        }
    }

    for(int i=0; i<filas; i+=2)
    {
        for(int j=0; j<columnas; j+=2)
        {
            cout << matriz[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "\n";

    for(int i=0; i<filas; i+=3)
    {
        for(int j=0; j<columnas; j+=3)
        {
            cout << matriz[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
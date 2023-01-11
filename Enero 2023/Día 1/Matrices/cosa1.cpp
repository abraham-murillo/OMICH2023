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

    for(int i=0; i<filas; i++)
    {
        for(int j=0; j<columnas; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
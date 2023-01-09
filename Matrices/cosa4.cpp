#include <bits/stdc++.h>

using namespace std;

int main()
{
    int filas, columnas;
    cin >> filas >> columnas;

    pair<int,string> matriz[filas][columnas];

    for(int i=0; i<filas; i++)
    {
        for(int j=0; j<columnas; j++)
        {
            cin >> matriz[i][j].first >> matriz[i][j].second;
        }
    }
    cout << "\n";

    for(int i=0; i<filas; i++)
    {
        for(int j=0; j<columnas; j++)
        {
            cout << matriz[i][j].first << " " << matriz[i][j].second << "\n";
        }
    }

    return 0;
}
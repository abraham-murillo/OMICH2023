#include <iostream>

using namespace std;

int main()
{
    int m[4][3];
    /*
     * Formas de asignar valores a la matriz
    m[0][0] = 1;
    m[0][1] = 2;
    m[0][2] = 3;

    for(int i=0; i<3; i++)
    {
        cin >> m[1][i];
    }

    m[3][2] = 12;
    */
    
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin >> m[i][j];
        }
    }
    

    /*
     * Imprimir la matriz como asi está
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout << m[i][j] << " ";
        }
        cout << "\n";
    }
    */

    for(int i=3; i>=0; i--)
    {
        for(int j=2; j>=0; j--)
        {
            cout << m[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
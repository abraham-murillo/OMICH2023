#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

struct atleta{
    string nombre;
    int habilidad;
    int experiencia;
    
    friend ostream& operator<<(ostream& os, const atleta& a)
    {
        cout << a.nombre << " " << a.habilidad << " " << a.experiencia;
        
        return os;
    }
};

bool compara(atleta a, atleta b)
{
    if(a.habilidad > b.habilidad)
    {
        return true;
    }else if(a.habilidad == b.habilidad)
    {
        return (a.experiencia > b.experiencia);
    }else 
    {
        return false;
    }
}

int main() {
    int n;
    cin >> n;
    
    atleta atletas[n];
    for(int i=0; i<n; i++)
    {
        cin >> atletas[i].nombre >> atletas[i].habilidad >> atletas[i].experiencia;
    }
    
    
    int q;
    cin >> q;
    while(q--)
    {
        int l,r;
        cin >> l >> r;
        
        if(compara(atletas[r-1], atletas[l-1]))
        {
            swap(atletas[r-1], atletas[l-1]);
        }
    }
    
    for(atleta a: atletas)
    {
        cout << a << "\n";
    }
    
}
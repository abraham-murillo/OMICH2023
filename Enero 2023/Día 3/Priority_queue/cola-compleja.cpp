#include <iostream>
#include <queue>

using namespace std;

struct Persona{
    string nombre;
    int habilidad;
    int experiencia;
};

class compara
{
    public:
        bool operator()(Persona &a, Persona &b)
        {
            if(a.habilidad < b.habilidad)
            {
                return true;
            }else if(a.habilidad == b.habilidad)
            {
                return a.experiencia < b.experiencia;
            }else
            {
                return false;
            }
        }
};

int main() {
    priority_queue<Persona, vector<Persona>, compara> cola;

    int n;
    cin >> n;

    while(n--)
    {
        Persona p;
        cin >> p.nombre >> p.habilidad >> p.experiencia;
        cola.push(p);
    }

    while(!cola.empty())
    {
        Persona p = cola.top();
        cout << p.nombre << " " << p.habilidad << " "<< p.experiencia << "\n";
        cola.pop();
    }
}
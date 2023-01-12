#include <iostream>
#include <queue>

using namespace std;

class compara
{
    public:
        bool operator()(int &a, int &b)
        {
            return a > b; // De menor a mayor
        }
};

int main() {
    priority_queue<int, vector<int>, compara> cola;
    priority_queue<int> cola2;
    
    int n;
    cin >> n;

    while(n--)
    {
        int aux;
        cin >> aux;
        cola.push(aux);
        cola2.push(aux);
    }
    
    while(!cola.empty())
    {
        cout << cola.top() << " ";
        cola.pop();
    }
    cout << "\n";
    
    while(!cola2.empty())
    {
        cout << cola2.top() << " ";
        cola2.pop();
    }
}
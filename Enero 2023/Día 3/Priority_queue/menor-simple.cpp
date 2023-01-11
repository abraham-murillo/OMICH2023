#include <iostream>
#include <queue>

using namespace std;

int main() {
    priority_queue<int> cola;
    int n;
    cin >> n;
    
    int a;
    while(n--)
    {
        cin >> a;
        cola.push(-a);
    }
    
    while(!cola.empty())
    {
        cout << -cola.top() << "\n";
        cola.pop();
    }
}
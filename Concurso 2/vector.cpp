#include "debug.h"
#include <bits/stdc++.h>
using namespace std;
#define fore(i, l, r) for (unsigned long long i = l; i < r; i++)
#define ll long long
#define ull unsigned long long
#define f first
#define s second
#define pb push_back
#define pf push_front
#define pq priority_queue
#define mq greater
using ii = pair<int, int>;

  int a[10];
  vector<int> b;

int main(){
  cin.tie(0)->sync_with_stdio(0), cout.tie(0);
  
  debug(a,b);
  //a: [0, 0, 0, 0, 0, 0, 0, 0, 0, 0], b: []
  
     //Agregar elementos a el vector------------------
  b.push_back(1);
  b.push_back(2);//Inserta un elemento en elfinal
  b.push_back(3);
  b.push_back(4);
  b.push_back(5);
  b.push_back(6);
  
  debug(b);
  //b: [1, 2, 3, 4, 5, 6]
  
      //Eliminar elementos--------------------------
  
   b.pop_back(); // Elimina el ultimo elemento
   debug(b);
   //b: [1, 2, 3, 4, 5]
   
   
    b.push_back(6);
    b.push_back(7);
     
     //Eliminar en una determinada posicion
    
    b.erase(b.begin()+3);  // Eliminamos el elemento en la posicion 3, (4)
    debug(b);
    //b: [1, 2, 3, 5, 6, 7]
    //    0  1  2  3  4  5
     
     
   //Eliminar un rango o un subarreglo
   int l=1,r=4;
   b.erase(b.begin()+l, b.begin()+r+1); //<--- Rango abierto, que no alberga el ultimo elemento
   //     [inicio, fin] --> [inicio, fin + 1]     
   debug(b);
   //b: [1, 7]
   
   
   //Empty-------------------------------------------------------------------
   debug(b, b.empty()); // b: [1, 7],   b.empty(): false
   b.pop_back();
   b.pop_back();
   debug(b, b.empty()); // b: [],   b.empty(): true
   
   
   //Inicializar elementos--------------------------------
   b={1,23,1};
   debug(b);
   // b: [1, 23, 1]
   
    b={1,2,3,5};
    debug(b);
    //b: [1, 2, 3, 5]
    
    vector<int> c (10,1);
    debug(c);
    //c: [1, 1, 1, 1, 1, 1, 1, 1, 1, 1]
    
    
    //Insertar elementos
    
    int posicion=2, valor=11;
    debug(b);
    //b: [1, 2, 3, 5]
    //    0  1  2  3
    
    b.insert(b.begin()+posicion, valor);
    debug(posicion, valor, b);
    //b: [1, 2, 11, 3, 5]



    //Insertar una lista de elementos
    
    posicion=3;
    b.insert(b.begin()+posicion, {12,13,14});
    debug(posicion, b);
    //posicion: 3, b: [1, 2, 11, 12, 13, 14, 3, 5]
   
   b.pop_back();
   b.pop_back();
   b.pop_back();
   b.pop_back();
   
   // Acceder a posiciones ----------------------
     b[0]=100;
     b[2]=99;
    debug(b);
    //b: [100, 2, 99, 12, 13, 14, 3, 5]
    
    
     
  // Acceder al ultimo elemento
     b.back() = 200;
  //Acceder al primer elemento
     b.front() = 1;
     
     debug(b);
     //b: [1, 2, 99, 200]
     
     
    //Imprimir un vector------------------
    
    for(int i=0; i<b.size(); i++){
        cout << b[i] << " ";
    }cout << "\n";
    
    for(auto x : b){
        cout << x << " "; 
    }cout << "\n";
    
    
    //Iteradores----------------------------
    
    for(auto i=b.begin(); i!=b.end(); i++){
        cout << *i << " ";
    }cout << "\n";
    
    for(auto i=b.rbegin(); i!=b.rend(); i++){  // ALRREBES
        cout << *i << " ";
    }cout << "\n";
   
  
 return 0;
}

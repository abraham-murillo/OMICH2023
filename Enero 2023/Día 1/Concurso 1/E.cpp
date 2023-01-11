#include <bits/stdc++.h>

using namespace std;

int n,m,l,r;
bool mat[1002][1002];
int xd[1002][1002];
void ch(int sr, int sc, vector<vector<int>>& enc){
    for(int i = sr; i < sr+l;i++){
        for(int j = sc; j < sc+r;j++){
            if(enc[i-sr][j-sc] != xd[i][j]){
                return;
            }
        }
    }
    for(int i = sr; i < sr+l;i++){
        for(int j = sc; j < sc+r;j++){
            mat[i][j] = 1;
        }
    }
}
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> n >> m;
    for(int i = 0;i < n;i++){
        for(int j = 0 ;j < m;j++){
            cin >> xd[i][j];
        }
    }
    cin >> l >> r;
    vector<vector<int>> enc(l,vector<int>(r));
    for(int i = 0;i < l;i++){
        for(int j = 0;j < r;j++){
            cin >> enc[i][j];
        }
    }
    for(int i = 0;i < n-l+1; i++){
        for(int j = 0;j < m-r+1;j++){
            ch(i,j,enc);
        }
    }
    for(int i = 0;i < n;i++){
        for(int j = 0 ;j < m;j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}
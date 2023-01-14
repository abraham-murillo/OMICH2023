#include <bits/stdc++.h>
#define fore(i, l, r) for (long long i = (l); i < (r); i++)
#define forex(i, l, r) for (long long i = (l); i >= (r); i--)
#define ll long long
#define ull unsigned long long
#define nl cout<<"\n"
#define cnl "\n"
#define rfc "\033[31;1m"
#define gfc "\033[32;1m"
#define yfc "\033[33;1m"
#define bfc "\033[34;1m"
#define pfc "\033[35;1m"
#define cfc "\033[36;1m"
#define nfc "\033[0m"
#define pb push_back
using namespace std;

struct persona{
	int edad;
	string nombre;
};


int binaria(vector<int>& v, int x){
	int l=0, r=v.size()-1, m;
	while((r-l)>1){
		m=(l+r)/2;
		if(v[m]<x){
			l=m+1;
		}else{
			r=m;
		}
	}
	if(v[l]==x) return l;
	if(v[r]==x) return r;
	return -1;
}

int binariaPersona(vector<persona>& v, persona x){
	int l=0, r=v.size()-1, m;
	while((r-l)>1){
		m=(l+r)/2;
		if(v[m].edad<x.edad){
			l=m+1;
		}else{
			r=m;
		}
	}
	if(v[l].edad==x.edad) return l;
	if(v[r].edad==x.edad) return r;
	return -1;
}

int lowerBound(string& v, char x){
	int l=0, r=v.size()-1, m;
	while((r-l)>1){
		m=(l+r)/2;
		if (x > v[m]) {
            l = m;
        }else {
            r = m;
        }
	}
	if(v[l]==x) return l;
	if(v[r]==x) return r;
	return -1;
}

int upperBound(string& v, char x){
	int l=0, r=v.size()-1, m;
	while((r-l)>1){
		m=(l+r)/2;
		if (x >= v[m]) {
            l = m;
        }else {
            r = m;
        }
	}
	if(v[r]==x) return r;
	if(v[l]==x) return l;
	return -1;
}

int elementos(string &s, char x) {
    return upperBound(s, x) - lowerBound(s, x) + 1;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s = "aabbbbxxxxyy";

    int lower = lowerBound(s, 'b');
    cout << lower << '\n';

    int upper = upperBound(s, 'b');
    cout << upper << '\n';

    cout << elementos(s, 'b') << '\n';

    auto lowerCpp = lower_bound(
        s.begin(), 
        s.end(), 
        'b') - s.begin();
    cout << lowerCpp << cnl;

    auto upperCpp = upper_bound(
        s.begin(), 
        s.end(), 
        'b') - s.begin();
    cout << upperCpp << cnl;


    for (auto 
    it = lower_bound(s.begin(), s.end(), 'b'); 
    it != upper_bound(s.begin(), s.end(), 'b'); it++) {
        cout << *it << " " << it - s.begin() << '\n';
    }

    cout<<"\n";
}

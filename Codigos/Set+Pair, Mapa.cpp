#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;

#define vi vector<int>
#define pb push_back
#define ff first
#define ss second
#define sz(x) int(x.size())
#define all(x) x.begin(),x.end()
#define forn(i,n) for(int i = 0; i < n; i++)
typedef pair<ll, string> pairs;

struct ComparePairs {
    bool operator()(const pair<ll, string>& a, const pair<ll, string>& b) const {
        if (a.first != b.first) {
            return a.first > b.first;
        }

        return a.second < b.second;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
	int n, a; cin>>n>>a;

   set<pair<ll, string>, ComparePairs>s;
   map<string, ll> mapa;

    forn(i, n){
        string nom; cin>>nom;
        ll t; cin>>t;
        s.insert({t, nom});
        mapa[nom] = t;
    }

   forn(i, a){
        int ax; cin>>ax;

        if(ax == 1){
            string nom; cin>>nom;
            ll o; cin>>o;
            auto it = s.find(make_pair(mapa[nom], nom));
            if(it != s.end()){
                mapa[nom] += o;
                s.erase(it);
                s.insert(make_pair(mapa[nom], nom));
            }
        }else{
        	auto it = s.begin();
            pairs m = *it;
            cout<<m.ss<<" "<<m.ff<<endl;
            s.erase(it);
        }

   }

    return(0);
}

#include<bits/stdc++.h>
using namespace std;

/*
 * Autor: madisktral
 *
*/

typedef long long ll;
typedef pair<int, int> ii;

#define vi vector<int>
#define pb push_back
#define ff first
#define ss second
#define sz(x) int(x.size())
#define all(x) x.begin(), x.end()
#define forn(i, a) for (ll i = 0; i < ll(a); ++i)
#define nline '\n'
#define cou(x) cout << x << nline;
int n, m, x, y, l = 0, r = int(1e9), numVisitados = 0, c = 0, t = 0;
int ady[1000][1000];
vector<vector<bool>> check(1000, vector<bool> (1000) );
bool checkEgg = false;

void flood(int x1, int y1){
	if ((x1 >= n || x1 < 0) || (y1 < 0 || y1 >= m)) return;
	if (check[x1][y1]) return;
	if (ady[x1][y1] - t >= 0) return;
	
	check[x1][y1] = true;
	if (x1 == x && y1 == y)  {
		checkEgg = true;
		return;
	}
	
	flood(x1 - 1, y1);
	flood(x1 + 1, y1);
	flood(x1, y1 - 1);
	flood(x1, y1 + 1);
}

void resetMatrix (){
	forn(i, n) forn (j, m) check[i][j] = false;
}


void solve(){
	cin >> n >> m >> x >> y;
	x--; y--;
	forn (i, n) forn (j, m) cin  >> ady[i][j];
	
	
	while (r - l > 1){
		t = l + (r - l) / 2;
		checkEgg = false;
		flood(0,0);
		resetMatrix();
		
		if (checkEgg) r = t;
		else l = t;
	}
	
	cout << r << nline;
}

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
	
	
	solve();
	return 0;
}
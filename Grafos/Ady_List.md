
# Lista de adyacencia para grafos basicos

```
int n, q; cin>>n>>q;

vector<int> ady[n+1];

while(q--){
    int a, b; cin>>a>>b;
    ady[a].pb(b);
    ady[b].pb(a);
}

for(int i = 1; i <= n; i++){
    int c = 0;
    if(ady[i].empty()) cout<<"0";
    else{
        sort(all(ady[i]));
        cout<<ady[i].size()<<" ";
        for(int &j: ady[i]){
            cout<<j<<" ";
        }
    }
    cout<<endl;
    
}
```


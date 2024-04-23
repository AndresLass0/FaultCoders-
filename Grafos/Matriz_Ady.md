
# Como se pide la Matriz de Adyacencia para grafos basicos

```
int main(){
fast
int n; cin>>n;
int ady [n+1] [n+1];
memset(ady, 0, sizeof ady);

for(int i = 1; i <= n; i++){
    for(int j = 1; j <= n; j++){
        cin>>ady[i][j];
    }
}

for(int i = 1; i <= n; i++){
    int c  = 0;
  for(int j = 1; j <= n; j++){
    if(ady[i][j] == 1){
        c++;
    } 
  }
  cout<<c<<" ";
  for(int j = 1; j <= n; j++){
    if(ady[i][j] == 1){
        cout<<j<<" ";
    } 
  }
  cout<<endl;
}
```


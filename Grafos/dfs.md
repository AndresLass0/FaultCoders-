# Recorrido de profundidad o DFS

```
void dfs(int u){
    vis[u] = 1;
    for(int &v : ady[u]){
        if(!vis[v]){
            dfs(v);
        }
    }
}
```

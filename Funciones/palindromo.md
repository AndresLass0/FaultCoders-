# Funcion para saber si una cadena es palindroma

```
bool ispali(string s){
    int n = s.length();
    for(int i = 0; i < n / 2 ; i++){
        if(s[i] != s[(n - i - 1)])
            return false;
    }
    return true;
}

```	
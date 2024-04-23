# Funcion para saber si un numero es primo

```
bool esprimo(long long n) {
    if(n%2 == 0){
       return false;
   }else{
       for(int i = 3 ; i * i <= n; i += 2){
           if(n%i == 0){
               return false;
           }
       }
   }
  return true;
}
```
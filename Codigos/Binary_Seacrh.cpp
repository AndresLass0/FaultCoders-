
//Busca el elemto anterior del numero N
//Ejemplo: 1, 3, 5, 7, 9;
//N = 6;
//Res = 3;

int bs(const vector<int>& array, int n){

    int l = 0;
    int r = array.size() - 1; int i = 0; int md = 0;

    while(l <= r){
         md = (l+r)/2;
        //cout<<"l:"<<l<<" md:"<<md<<" r:"<<r<<endl;
        if(array[md] > n){
            r = md - 1;
        }else{
            l = md + 1 ;
        }

    }

    return l;
}


}

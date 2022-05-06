

#include <iostream>

using namespace std;

int main()
{
    int temp, vec, n[50];
    temp=0;
    n[0]=0;
    n[1]=1;

    cout<<"Ingrese la cantidad de posiciones del vector: ";
    cin>>vec;
    
    for(int i=1; i<vec; i++){
        
        temp=i+n[i- 1];
        n[i]=temp;
    }
    for(int i=vec; i>0; i--){
        cout<<n[i- 1]<<endl;
        
    }

    return 0;
}

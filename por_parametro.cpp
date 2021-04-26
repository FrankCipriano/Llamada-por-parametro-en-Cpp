#include <stdio.h>
#include <iostream>
using namespace std;

int elevarAlCubo(int);

int main(){
    int numero = 5;
    cout<<"El valor original del numero es: "<<numero;
    numero = elevarAlCubo(numero);
    cout<<"\nEl nuevo valor de Cubo es: "<<numero;
    return 0;
}
int elevarAlCubo(int n){
    return n*n*n;
}
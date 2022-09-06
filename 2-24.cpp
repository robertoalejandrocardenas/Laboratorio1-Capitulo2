#include <iostream>
using namespace std;

int main(){
    int x={};
    int y={};
    int a{};
    
    cout <<"Ingresa valor a X: ";
    cin>> x;
    cout <<"X es: "<<x<<endl;

    cout <<"Ingresa valor a Y: ";
    cin>> y;
    cout <<"Y es: "<<y<<endl;
    
    int suma =x+y;
    cout <<"La suma es: "<< suma<<endl;
    
    if (suma % 2 != 0)
        cout << "La suma es impar";
    else
        cout << "La suma es par";

    return 0;
    
}
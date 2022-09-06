#include <iostream>
using namespace std;

int main(){

int a{};
int b{};
int c{};
int d{};
int e{};

cout << "Ingrese el valor para a: "; cin >> a;
cout << "Ingrese el valor para b: "; cin >> b;
cout << "Ingrese el valor para c: "; cin >> c;
cout << "Ingrese el valor para d: "; cin >> d;
cout << "Ingrese el valor para e: "; cin >> e;

if (a > b, c, d, e){
    cout << "El numero mas grande es a: "; cout << a;
}
else if (b > a, c, d,e){
    cout << "El numero mas grande es e: "; cout << b;
}
else if (c > a, b, d, e){
    cout << "El numero mas grande es i: "; cout << c;
}
else if (d> b, a, c, e){
    cout << "El numero mas grande es o: "; cout << d;
}
else if (e > a, b, c, d){
    cout << "El numero mas grande es u: "; cout << e;
}

return 0;

}
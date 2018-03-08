#include <iostream>
#include <string>
using namespace std;

int get_input(string l){
    int x = 0;
    while(1){
        cout << "Lado " << l << endl;
        cin >> x;
        if(x < 0 || x > 9){
            cout <<"Invalid value"<< l << endl;
            continue;
        }
        break;
    }
    return x;
}

int main(){
    int a,b,c;
    a = get_input("A");
    b = get_input("B");
    c = get_input("C");

    cout << "Lado A = " << a;
    cout << ", Lado B = " << b;
    cout << ", Lado C = " << c << endl;

    if (a == b && b == c){
        cout << "Equilátero" << endl;
    }
    else if(a == b || b == c || a == c){
        cout << "Isóceles" << endl;
    }
    else{
        cout << "Escaleno" << endl;
    }
    return 0;
}
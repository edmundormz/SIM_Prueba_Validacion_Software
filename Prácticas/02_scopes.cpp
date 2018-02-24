// scopes
#include <iostream>
using namespace std;

int x = 20, c;

int diff(int a, int b){
    c = a - b;
    return c;
}

int main(){
    int y = 30;
    int z = diff(y,x);
    cout << "Global variable x = " << x << endl;
    cout << "Inner variable y = " << y << endl;
    cout << "Difference between them is " << z << endl;
    return 0;
}
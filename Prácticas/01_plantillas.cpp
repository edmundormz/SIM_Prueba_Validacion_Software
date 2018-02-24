// Héctor Edmundo Ramírez
#include <iostream>
using namespace std;

template <class H>
H average (H x, H y, H z){
    H mean;
    mean = (x + y + z)/3;
    return mean;
}

int main(){
    int a=10, b=20, c=30, m;
    double h=14.5, i=20.3, j=25.8, k;
    m = average<int>(a, b, c);
    k = average<double>(h, i, j);
    cout << m << endl;
    cout << k << endl;
    return 0;
}
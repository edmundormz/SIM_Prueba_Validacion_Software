// Héctor Edmundo Ramírez
#include <iostream>
using namespace std;

int main(){
    int value_1 = 10, value_2 = 30, res;
    int * p1, * p2;

    p1 = &value_1;
    p2 = &value_2;

    res = *p1 + *p2;
    cout << "Sum is " << res << endl;
    return 0;
}

// H. Edmundo Ramírez
#include <iostream>
using namespace std;

namespace costos{
    double compra = 45.60;
}

namespace ventas{
    double precio = 68.50;
}

int main(){
    using namespace costos;
    cout << "El costo de compra es " << compra << endl;
    cout << "El precio de venta es " << ventas::precio << endl;
    return 0;
}
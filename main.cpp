#include "Medicine.h"

int main() {
    Medicine a("Aspiryn", "pills", 20.99);
    a.showInfo();
    cout << endl;

    cout << "----------------------\n";
    Medicine b = a; //Copy constructor
    b.setTitle("Aspiryn Forte");
    b.showInfo();

    a.showInfo();
    cout << "----------------------\n";
    Medicine c("Nurofen", "syrope", 200.99);

    a = c; //Operator =

    c.showInfo();
    a.showInfo();
    return 0;
}

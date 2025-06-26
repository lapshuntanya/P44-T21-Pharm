#include "Medicine.h"

int main() {
    Medicine a("Aspiryn", "pills", 20.99);
    a.showInfo();
    cout << endl;

    cout << "----------------------\n";
    Medicine b = a;
    b.setTitle("Aspiryn Forte");
    b.showInfo();


    a.showInfo();


    return 0;
}

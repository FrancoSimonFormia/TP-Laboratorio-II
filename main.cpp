#include <iostream>

using namespace std;
#include "Fecha.h"

int main()
{
    int a;
    Fecha f;
    f.agregarDias(-10);
    cout << "test";
    cout << f.toString();
    return 0;
}

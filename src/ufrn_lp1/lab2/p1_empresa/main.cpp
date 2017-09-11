#include <iostream>
#include "empresa.h"

using std::cout;
using std::endl;

int main(){
    Empresa* empresa = new Empresa("Marcell Ltda", "123456789");
    cout << *empresa << " criada." << endl;
    return 0;
}

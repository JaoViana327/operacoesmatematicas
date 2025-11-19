#include <assert.h>

#include "multiplicar.c"
#include "dividir.c"

int main() {
    assert(multiplicar(7, 3) == 21);
    assert(multiplicar(3, 8) == 24);
    assert(dividir(20, 2) == 10);
    assert(dividir(35, 5) == 7);
    return 0;
}

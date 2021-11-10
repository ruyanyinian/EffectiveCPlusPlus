#include "item7.hpp"


void deleteClass(A *base) {
    delete base;
}
int main() {

    C *myc = new C;
    deleteClass(myc);
    return 0;
}
#include "f.h"

int main() {
    struct Point huy;
    huy.x=5;
    huy.y=5;
    while(1) {
        space();
        move(&huy);
    }
}



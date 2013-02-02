#include <stdio.h>

#include "Object.h"
#include "Int.h"

#define N 10

int main(void) {
    Int i1 = Int_new(10);
    Int i2 = Int_new(20);
    Int i3 = Int_new(30);
    printf("%d\n", Int_getRawInt(i1));
    printf("%d\n", Int_getRawInt(i2));

    i1 = i1->plus(i1, i2)->minus(i1, i3);

    printf("%d\n", Int_getRawInt(i1));
    printf("%d\n", Object_id((Object)i3));
    Int_del(i1);
    Int_del(i2);
    Int_del(i3);

    return 0;
}


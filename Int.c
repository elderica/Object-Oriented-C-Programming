#include "Int.h"
#include "IntP.h"
#include <stdlib.h>

Int Int_init(Int self, int n);
Int Int_die(Int self);

Int Int_new(int n) {
    Int self = (Int)malloc(sizeof(_Int));
    if (self == NULL) {
        self = Int_del(self);
        return NULL;
    }
    Object_init((Object)self, (Deleter)Int_del);
    Int_init(self, n);
    return self;
}

Int Int_init(Int self, int n) {
    self->n = n;
    self->plus = Int_plus;
    self->minus = Int_minus;
    self->multi = Int_multi;
    self->div = Int_div;
    return self;
}

Int Int_die(Int self) {
    return self;
}

Int Int_del(Int self) {
    free(self);
    return NULL;
}

Int Int_plus(Int self, Int other) {
    self->n += other->n;
    return self;
}

Int Int_minus(Int self, Int other) {
    self->n -= other->n;
    return self;
}

Int Int_multi(Int self, Int other) {
    self->n *= other->n;
    return self;
}

Int Int_div(Int self, Int other) {
    self->n /= other->n;
    return self;
}

int Int_getRawInt(Int self) {
    return self->n;
}


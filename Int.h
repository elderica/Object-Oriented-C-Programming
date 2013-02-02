#ifndef _INT_H_INCLUDED_
#define _INT_H_INCLUDED_

#include "Object.h"
#include "ObjectP.h"

typedef struct _Int* Int;
typedef Int (*IntOp)(Int self, Int other);
typedef struct _Int {
    _Object super;

    int n;
    IntOp plus;
    IntOp minus;
    IntOp multi;
    IntOp div;
} _Int;

Int Int_new(int n);
Int Int_del(Int self);
Int Int_plus(Int self, Int other);
Int Int_minus(Int self, Int other);
Int Int_multi(Int self, Int other);
Int Int_div(Int self, Int other);
int Int_getRawInt(Int self);

#endif


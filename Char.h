#ifndef _CHAR_H_INCLUDED_
#define _CHAR_H_INCLUDED_

#include "Object.h"
#include "ObjectP.h"

typedef struct _Char* Char;
typedef Char (*CharOp)(Char self, Char other);
typedef struct _Char {
    _Object super;

    int c;
} _Char;

Char Char_new(int c);
Char Char_del(Char self);
int Char_getRawChar(Char self);

#endif


#include "Char.h"
#include "CharP.h"
#include <stdlib.h>

Char Char_init(Char self, int c);
Char Char_die(Char self);

Char Char_new(int c) {
    Char self;
    if ((self = (Char)malloc(sizeof(_Char))) == NULL) {
        self = Char_del(self);
        return NULL;
    }
    Char_init(self, c);
    return self;
}

Char Char_init(Char self, int c) {
    Object_init((Object)self, (Deleter)Char_del);
    self->c = c;
    return self;
}

Char Char_die(Char self) {
    return self;
}

Char Char_del(Char self) {
    free(self);
    return NULL;
}

int Char_getRawChar(Char self) {
    return self->c;
}


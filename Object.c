#include "Object.h"
#include "ObjectP.h"
#include <stdlib.h>

Object Object_init(Object self, Deleter del) {
    static int id = 0;
    self->__id__ = id++;
    self->del = del;
    return self;
}

Object Object_new(void) {
    return Object_init(
            (Object)malloc(sizeof(_Object)), _Object_del);
}

Object Object_die(Object self) {
    return self;
}

Object Object_del(Object self) {
    return (*(self->del))(self);
}

Object _Object_del(Object self) {
    Object_die(self);
    free(self);
    return NULL;
}

int Object_id(Object self) {
    return self->__id__;
}


#ifndef _OBJECT_PRIVATE_H_INCLUDED_
#define _OBJECT_PRIVATE_H_INCLUDED_

typedef Object (*Deleter)(Object self);

typedef struct _Object {
    int __id__;
    Deleter del;
} _Object;

Object Object_init(Object self, Deleter del);
Object Object_die(Object self);
Object _Object_del(Object self);

#endif


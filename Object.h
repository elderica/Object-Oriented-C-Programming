#ifndef _OBJECT_H_INCLUDED_
#define _OBJECT_H_INCLUDED_

typedef struct _Object* Object;

Object Object_new(void);
Object Object_del(Object self);
int Object_id(Object self);

#endif


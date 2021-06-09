#include "visitor.h"
#include "Kaiju.h"
void Kaiju::accept(class Visitor &v)
{
    v.visit(this);
}

#include "Kaiju.h"
#include "visitor.h"
void Kaiju::accept(class Visitor &v) //override
{
    v.visit(this);
}

#include "Jaeger.h"
#include "visitor.h"
void Jaeger::accept(class Visitor &v) //override
{
    v.visit(this);
}

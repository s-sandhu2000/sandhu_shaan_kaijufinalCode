#include "visitor.h"
#include "Jaeger.h"
void Jaeger::accept(class Visitor &v)
{
    v.visit(this);
}

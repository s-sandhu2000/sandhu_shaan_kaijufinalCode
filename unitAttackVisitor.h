#ifndef UAVISITOR_H
#define UAVISITOR_H

#include "Jaeger.h"
#include "Kaiju.h"
#include "visitor.h"
class unitAttackVisitor: public Visitor {
    public:
        unitAttackVisitor() {}
        void visit(Kaiju *e) {

        }
        void visit(Jaeger *e) {

        }

}

#endif


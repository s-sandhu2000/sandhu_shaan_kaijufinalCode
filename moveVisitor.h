#ifndef MVISITOR_H
#define MVISITOR_H

#include "Jaeger.h"
#include "Kaiju.h"
#include "visitor.h"
#include "util.h"
class moveVisitor: public Visitor {
    public:
        moveVisitor() {}
        void visit(Kaiju *e) {

        }
        void visit(Jaeger *e) {

        }
}

#endif


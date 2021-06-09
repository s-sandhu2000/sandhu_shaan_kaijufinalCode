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
            vel_x = niceRand();
            vel_y = niceRand();
            e->updatePos(vec2(vel_x,vel_y));

        }
        void visit(Jaeger *e) {
            e->updatePos();
        }
}

#endif


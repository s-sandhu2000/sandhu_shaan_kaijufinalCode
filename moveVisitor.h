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
           double vel_x = niceRand();
           double vel_y = niceRand();
            e->updatePos(vec2(vel_x,vel_y));

        }
        void visit(Jaeger *e) {
            double current =
            double next =
            e->updatePos();
        }
};

#endif


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

            vec2 nextVelocity;
            double currentPos = e->getLocation().x();
            if (currentPos == 0.0)
            {

                nextVelocity = vec2(-1,0);
                e->updateVelocity(nextVelocity);
                e->updatePos();
            }
            else if (currentPos == -4.0)
            {

                nextVelocity = vec2(1,0);
                e->updateVelocity(nextVelocity);
                e->updatePos();
            }
            else{
                e->updatePos();
            }
        }
};

#endif


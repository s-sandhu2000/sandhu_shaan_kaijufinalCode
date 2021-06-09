#ifndef UAVISITOR_H
#define UAVISITOR_H

#include "Jaeger.h"
#include "Kaiju.h"
#include "visitor.h"
class unitAttackVisitor: public Visitor {
    public:
        unitAttackVisitor() {}
        void visit(Kaiju *e) {
            std::cout << "dealing one damage to Kaiju" << std::endl;
        }
        void visit(Jaeger *e) {
            std::cout << "dealing one damage to Jaeger" << std::endl;

        }

}

#endif


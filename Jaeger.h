#ifndef JAEGER_H
#define JAEGER_H

#include "util.h"
#include "vec2.h"
#include "gameObj.h"
class Visitor;
class Jaeger : public gameObj {
  public:
    Jaeger(vec2 start, int size, std::string name, std::string pilotN1, std::string pilotN2) : gameObj{start, size, name}{
       this->power = 2.0;
       this->pilot1 = pilotN1;
       this->pilot1 = pilotN2;
       velocity = vec2(0, 0);
    }

    double getHealth() const { return power; }
    //life can never be less than 0 - maybe able to sheild (roll dice)
    void takeHit(double damage) override{
      if (niceRand() > 0.5) power = fmax(0.0, power - damage);
    }
    std::string getPilot1() const { return pilot1; }
    std::string getPilot2() const { return pilot2; }

    void updatePos() { position += velocity;}
    void accept(class Visitor &v) override;
    void updateVelocity(vec2 v){velocity = v;}
    vec2 getVelocity() const {return velocity;};
  private:
    vec2 velocity;
    double power;
    std::string pilot1;
    std::string pilot2;
};

#endif

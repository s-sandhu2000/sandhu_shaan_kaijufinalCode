
#ifndef KAIJU_H
#define KAIJU_H

#include "gameObj.h"


class Kaiju : public gameObj {
  public:
    Kaiju(vec2 start, int size, std::string name, std::string superPower): gameObj{start, size, name} {
	   this->life = 1.0;
       this->superPower = superPower;
	}

  double getHealth() const { return life; }
  //life can never be less than 0
  void takeHit(double damage) override{
    life = fmax(0.0, life - damage);
  }
  std::string getPower() const { return superPower; }

  void updatePos(vec2 vel) { position += vel; }
  void accept(class Visitor &v) override;

  private:
    double life; //percentage of ‘health’
    std::string superPower;
};


#endif

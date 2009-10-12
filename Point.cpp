#include "Point.h"

Position::Position(int xx, int yy){

  x = xx;
  y = yy;

}



Point::Point(){

  positions(8);
  positions[0](-1, 1); // NW
  positions[1](0, 1); // N
  positions[2](1, 1); // NE
  positions[3](1, 0); //E
  positions[4](1, -1); // SE
  positions[5](0, -1); // S
  positions[6](-1, -1); // SW
  positions[7](-1, 0); // W
}

Point::~Point(){


}

void Point::paintEvent(QPaintEvent* event){


}

#include "Point.h"

Position::Position(int xx, int yy){

  x = xx;
  y = yy;

}



Point::Point(int xx, int yy){
  
  maxWindowSizeWidth =  xx;
  maxWindowSizeHeight = yy;
  
  setFixedSize(xx, yy);
  
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
  QPainter painter();
  int xx = 50;
  int yy = 50;
  int random = 0;
  for(int i = 0; i < 8;i++){
    random = rand();
    xx += positions[(int)(random*8 + 1)].x;
    yy += positions[(int)(random*8 + 1)].y;
    Qpoint p(xx%maxWindowSizeWidth, yy%maxWindowSizeHeight);
    painter.drawPoint(p);
    painter.setPen(QColor::fromCmyk(rand()*256 , rand()*256, rand()*256, 0));
  }

}

#include "Point.h"
#include <iostream>

using namespace std;

Position::Position(int xx, int yy){
  
  x = xx;
  y = yy;

}

Position::Position(){

}

Point::Point(int xx, int yy){
  
  maxWindowSizeWidth =  xx;
  maxWindowSizeHeight = yy;
  
  setFixedSize(xx, yy);
  positions.resize(8);
  positions[0] = Position(-1, 1); // NW
  positions[1] = Position(0, 1); // N
  positions[2] = Position(1, 1); // NE
  positions[3] = Position(1, 0); //E
  positions[4] = Position(1, -1); // SE
  positions[5] = Position(0, -1); // S
  positions[6] = Position(-1, -1); // SW
  positions[7] = Position(-1, 0); // W

  setVisible(true);
}



void Point::paintEvent(QPaintEvent*){
  QBrush brush;
  QPainter painter(this);
  int xx = -1;
  int yy = -1;
  int random = rand()%8;
  
  for(int i = 0; i < 1000000000;i++){
    random = rand()%8;
    xx += positions[(int)(random)].x ;
    yy += positions[(int)(random)].y ;
    QPoint p(xx%maxWindowSizeWidth, yy%maxWindowSizeHeight);
    painter.drawPoint(p);
    brush.setColor(QColor::fromRgb(random%256,random%256, random%236, 255));
    painter.setBrush(brush.color());
  }

}

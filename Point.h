#include <QPoint>
#include <QWidget>
#include <QPainter>
#include <QMap>
#include <QRgb>

class Position{
public:
  int x,y;
  Position(int, int);

};


class Point : public QWidget {

public:
  int maxWindowSizeWidth, maxWindowSizeHeight ;
  QVector<Position> positions;
  Point(int, int);
  //  ~Point();

  void paintEvent(QpaintEvent*);
  


};

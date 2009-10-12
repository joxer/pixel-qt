#include <QApplication>
#include <time.h>
#include "Point.cpp"
int main(int argc, char **argv){

  QApplication app(argc, argv);
  srand(time(0));
  Point p (345, 230);
  return app.exec();


}

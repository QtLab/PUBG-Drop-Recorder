#ifndef MAPWINDOW_H
#define MAPWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QMouseEvent>

namespace Ui {
class MapWindow;
}

class MapWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MapWindow(QWidget *parent = 0);
    ~MapWindow();
    void mousePressEvent(QMouseEvent *event);

private:
    Ui::MapWindow *ui;
};

#endif // MAPWINDOW_H

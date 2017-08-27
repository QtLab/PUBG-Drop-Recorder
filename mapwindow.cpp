#include "mapwindow.h"
#include "ui_mapwindow.h"

MapWindow::MapWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MapWindow)
{
    ui->setupUi(this);
    QPixmap pubgMap(":/new/map/images/fullmap.jpg");
    ui->mapImageLabel->setPixmap(pubgMap.scaled(ui->mapImageLabel->size(),Qt::IgnoreAspectRatio,Qt::FastTransformation));
    ui->mapImageLabel->show();
}

MapWindow::~MapWindow()
{
    delete ui;
}

void MapWindow::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::RightButton)
    {
        qDebug() << "RIGHT CLICK\n";
    }
}

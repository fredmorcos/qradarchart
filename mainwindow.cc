#include "mainwindow.h"
#include <QtWidgets/QHBoxLayout>
#include <stdlib.h>
#include <QTime>

MainWindow::MainWindow(QWidget *parent):
  QDialog(parent), m_radar(new QRadarChart(this))
{
  setMinimumSize(400, 400);

  srand(QTime::currentTime().msec());

  for (int i = 0; i < 5; i++) {
    QString name = "foo %1";
    m_radar->addProperty(name.arg(i), rand() % 100);
  }

  QHBoxLayout *layout = new QHBoxLayout(this);
  layout->addWidget(m_radar);
  setLayout(layout);
}

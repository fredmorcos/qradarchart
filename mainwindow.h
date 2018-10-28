#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtWidgets/QDialog>
#include "qradarchart.h"

class MainWindow: public QDialog {
  Q_OBJECT

private:
  QRadarChart *m_radar;

public:
  MainWindow(QWidget *parent = 0);
};

#endif // MAINWINDOW_H

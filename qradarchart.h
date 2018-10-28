#ifndef QRADARCHART_H
#define QRADARCHART_H

#include <QtWidgets/QWidget>
#include <QMap>

class QRadarChart: public QWidget {
  QMap<QString, int> m_properties;

public:
  QRadarChart(QWidget *parent = 0);
  void addProperty(QString propertyName, int propertyValue);

protected:
  void paintEvent(QPaintEvent *event);
};

#endif // QRADARCHART_H

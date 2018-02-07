#ifndef NIDAQMX_H
#define NIDAQMX_H

#include <QObject>

class NIDAQmx : public QObject
{
    Q_OBJECT
public:
    explicit NIDAQmx(QObject *parent = nullptr);

signals:

public slots:
};

#endif // NIDAQMX_H
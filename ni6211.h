#ifndef NI6211_H
#define NI6211_H

#include <QObject>

class NI6211 : public QObject
{
    Q_OBJECT
public:
    explicit NI6211(QObject *parent = nullptr);

signals:

public slots:
};

#endif // NI6211_H
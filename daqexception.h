#ifndef DAQEXCEPTION_H
#define DAQEXCEPTION_H

#include <QException>

class DAQException : public QException
{
private:
    qint32 code;
    DAQException& operator =(const DAQException& autre);
public:
    DAQException(qint32 codeErreur);
    int ObtenirCodeErreur();
    QString ObtenirDescription();
};

#endif // DAQEXCEPTION_H

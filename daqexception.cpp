#include "daqexception.h"
#include "NIDAQmx.h"

DAQException::DAQException(qint32 codeErreur) :
    QException(),
    code(codeErreur)
{

}

int DAQException::ObtenirCodeErreur()
{
    return code;
}

QString DAQException::ObtenirDescription()
{
    QString erreur = "Exception de la librairie NI-DAQmx\n";
    char *chaine ;
    qint32 taille = DAQmxGetErrorString(code,nullptr,0);
    if(taille > 0)
    {
        chaine = new char[taille];
        DAQmxGetErrorString(code,chaine,taille);
        erreur += chaine;
        delete[] chaine;
    }
    return erreur;
}

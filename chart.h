#ifndef CHART_H
#define CHART_H

#include "data.h"

class chart {
private:
    //campi dati che serviranno per la inizializzazione
    data* data; //puntatore al vettore QPair
    QList <qint8> anni; //vettore che contiene gli anni di riferimento delle x

public:
    chart();
    chart (const data&); //const cast per costruire data
    data& GetData() const;
    QList <qint8> getAnni() const;
    virtual void create( ) const=0; // barset, series,...
    virtual ~Chart();
};

#endif // CHART_H



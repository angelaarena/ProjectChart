#ifndef DATA_H
#define DATA_H

#include <QString>
using std vector;


class data {
private:
    QString title;
    QString description;

    QPair <quint8, quint8> pair;
    vector <pair> coordinate; //senza uomini e donne
    //vector<qint8*> x; //diventeranno QBarSet, QSeries, ecc...

    //creare 3 vettori ?
    //le pos [] sono allineate e al momento del bisogno prelevo

    QString name_x;
    QString name_y;

public:
    data();
    data ( , , );
    QString getTitle() const;
    QString getDescription() const;
    QString getNameX() const;
    QString getNameY() const;

    vector <QPair> GetCoordinate() const {
        vector <pair> aux;
        aux.size() = coordinate.size();
        for (vector<pair>::const_iterator it=coordinate.begin();
             it != coordinate.end(); ++it) {
            aux.first = coordinate.first;
            aux.second = coordinate.second;
        }
        return aux;
    }
};

#endif // DATA_H

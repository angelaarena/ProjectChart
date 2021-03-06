#ifndef DATA_H
#define DATA_H

#include <QString>
#include <QPair>
#include <vector>
using std::vector;

class data {
private:
    QString title;
    QString description;
    vector <QPair<qint8, qint8>> set; //vettore che contiene i dati con fist=uomini e second=donne

    /* QString name_x;
       QString name_y;
    Bisogna capire se viene a video */

public:
    data();
    data (QString, QString, vector <QPair>);
    QString getTitle() const;
    QString getDescription() const;
    QString getNameX() const;
    QString getNameY() const;
    void update (qint8, QPair); //rimpiazza in posizione qint con i valori di QPair
    bool isEmpty() const;
    ~data(); //distruzione profonda
};

#endif // DATA_H


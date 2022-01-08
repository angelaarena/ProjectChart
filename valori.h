#ifndef VALORI_H
#define VALORI_H

#include "dato.h"
#include <vector>

using std::vector;

class Valori
{
private:
    vector<dato*> valori;
public:
    Valori();
    void Add(const dato&);
    void Delete(int);
    int GetSize() const;
    void DeleteAll();       //svuota l'intero vector e dealloca prima i puntatori
    bool IsEmpty() const;
    bool operator==(const Valori&) const;
    bool operator!=(const Valori&) const;
    dato* operator[](int i) const;
    void Change(int,const dato&);
    ~Valori();  //deepDeallocation
};

#endif // VALORI_H

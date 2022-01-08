#ifndef DATO_H
#define DATO_H


class dato
{
private:
    int male;
    int female;
    bool enabled; //Indica se il dato va preso in considerazione
public:
    dato();
    dato(int m,int f,bool e):male(m),female(f),enabled(e);
    int getMaleNumber() const;
    int getFemaleNumber() const;
    void setMale(int m);
    void setFemale(int f);
};

#endif // DATO_H

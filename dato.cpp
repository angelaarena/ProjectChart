#include "dato.h"

dato::dato(){}
int dato::getMaleNumber() const{
    return male;
}
int dato::getFemaleNumber() const{
    return female;
}
void dato::setMale(int m){
    male = m;
}
void dato::setFemale(int f){
    female = f;
}

#include "valori.h"

Valori::valori(){

}

int Valori::GetSize(){
    return valori.size();
}

void Valori::Add(const dato& d){
    dato* aux = const_cast<dato*>(&d);
    valori.push_back(aux);
}

void Valori::Delete(int i){
    vector<dato*>::iterator it=valori.at(i);
    if(*it) delete *it; //dealloco l'oggetto puntato da it dallo heap
    valori.erase(it);
}

void Valori::DeleteAll(){
   vector<dato*>::const_iterator it=valori.begin();
   while(it != valori.end()){
       delete *it;
       it++;
   }
   valori.clear();
}

bool Valori::IsEmpty(){
    if(valori.size()==0)
        return true;
    else
        return false;
}

//package edu.ud.structure;
#ifndef LINEAR
#define LINEAR

#include "./Nodo.h"

template <class T>
class Linear 
{        
protected:
    Nodo* cabeza;
    Nodo* cola;
    int amount;

public:
    Linear() : cabeza(nullptr), cola(nullptr), amount(0) {}
    virtual ~Linear(){} = default;

    virtual Linear<T>& add(T dato) = 0;    
    virtual Nodo* findNodo(T dato) = 0;
    virtual void eliminate() = 0;
    
    int size() = 0;
    virtual void clear() {
        cabeza = nullptr;
        cola = nullptr;
        amount = 0;
    }
};

#endif
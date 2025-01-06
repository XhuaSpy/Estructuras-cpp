#ifndef NODO
#define NODO

template <class T>
class Nodo 
{
protected:
    T data;
    Nodo* next;

public:
    Nodo() : data(T()), next(nullptr) {}
    Nodo(const T& data) : data(data), next(nullptr) {}

    T get() const { return data; } 
    void setData( T data) { this->data = data; }
    
    Nodo* getNodo() const { return next }
    void setNodo (Nodo* nodo) { this->next = nodo} 
    
    virtual bool comparison() = 0;
};

#endif
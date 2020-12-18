#include "Nodo.h"

Nodo::Nodo() : obj(nullptr), siguiente(nullptr), anterior(nullptr) {

}

Nodo::Nodo(Objeto _obj, Nodo* _siguiente, Nodo* _anterior) : obj(_obj), siguiente(_siguiente), anterior(_anterior){


}
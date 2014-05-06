#include "adapt.hh"

Adapt::Adapt(VariableManager& vm,
	     Shape* father,
	     int key, 
	     float coef,
	     std::string gain){

  vm.addVariable(_key = new Variable(key));
  vm.addVariable(_coef = new Variable(coef));
  _action = gain;
  _parent = father;
}

Adapt::~Adapt(){

}

string 
Adapt::getAttrsToString(){
   ostringstream ostr;
   ostr << "Adapt " << _parent->name() << " key " << _key->value << " coef " << _coef->value << " action " << _action;
   
   return ostr.str();
}

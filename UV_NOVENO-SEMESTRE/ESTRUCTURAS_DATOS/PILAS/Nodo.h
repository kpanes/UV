#include <iostream>
using namespace std;

template <typename T>
class Nodo{
	public:
		T val;
		Nodo *sig;
		Nodo(T val){
			this->val=val;
			sig=NULL;
		}
		~Nodo(){}
};

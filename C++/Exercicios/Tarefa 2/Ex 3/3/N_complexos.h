#ifndef N_COMPLEXOS_H
#define N_COMPLEXOS_H

#include <iostream>
using namespace std;

class N_complexos
{
	private:
		float real;
		float imaginario;
			
	public:
		float getReal();
		float getImaginario();
		
		void setReal(float real);
		void setImaginario(float imaginario);
		
	protected:
};

#endif

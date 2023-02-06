#ifndef AGENDA_H
#define AGENDA_H
#include "Contatos.h"


class Agenda
{
	protected:
		Contatos *contatos;
		
	public:
		Contatos *getContatos();
		void setContatos(Contatos *contatos);
		
	
};

#endif

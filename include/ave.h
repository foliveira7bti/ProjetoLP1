#ifndef AVE_H
#define AVE_H

#include "animal.h"

class Ave : public Animal
{
	protected:
		double tamanho_do_bico_cm;
		double envergadura_das_asas;
	public:
		Ave(double tamanho_do_bico_cm_, double envergadura_das_asas_);
		~Ave();
};
#endif
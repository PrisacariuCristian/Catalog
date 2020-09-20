#pragma once

#include "CompiledHeader.h"

class Curs

{
	public:

		Curs(unsigned short int nr_credite,
			float medie_minima_admitere,
			unsigned short int ore_lectura,
			unsigned short int ore_laborator);
			//std::string profesori
	;

		~Curs()

	private:

		unsigned short int nr_credite;
		float medie_minima_admitere;
		unsigned short int ore_lectura;
		unsigned short int ore_laborator;
		//orar//
		std::string profesori;
};


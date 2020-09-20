#include "../lib/Curs.h"

Curs::Curs(unsigned short int nr_credite, float medie_minima_admitere,
	unsigned short int ore_lectura, unsigned short int ore_laborator,
	std::string profesori)
{
	this->nr_credite = nr_credite;
	this->medie_minima_admitere = medie_minima_admitere;
	this->ore_laborator = ore_laborator;
	this->ore_lectura = ore_lectura;
	this->profesori = profesori;
}

	Curs::~Curs()
{

}
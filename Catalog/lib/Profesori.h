#pragma once

#include "CompiledHeaders.h"

class Profesori
{
	public:

		Profesori(std::string nume,
				  std::string prenume,
				  std::string materie);

		~Profesori();

	private:

		std::string nume;
		std::string prenume;
		std::string materie;
};

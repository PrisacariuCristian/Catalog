#pragma once

#include "CompiledHeaders.h"

static unsigned short int temp = 0;

class Student
{
public:

	Student(std::string nume, std::string prenume,
		unsigned short int varsta, std::string nr_tel,
		std::string email, std::string locuinta);



	~Student();


private:

	std::string nume;
	std::string prenume;
	unsigned short int varsta;
	std::string nr_tel;
	std::string email;
	std::string locuinta;
	unsigned long int nr_matricol;
	//lista de cursuri//
	//sir 2d de medii//
	//orar//
};
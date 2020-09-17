#include "../lib/Student.h"

Student::Student(std::string nume, std::string prenume, 
		unsigned short int varsta, std::string nr_tel, 
		std::string email, std::string locuinta)
{
	temp++;
	nr_matricol = temp;
	this->nume = nume;
	this->prenume = prenume;
	this->varsta = varsta;
	this->nr_tel = nr_tel;
	this->email = email;
	this->locuinta = locuinta;
}

Student::~Student()
{

}

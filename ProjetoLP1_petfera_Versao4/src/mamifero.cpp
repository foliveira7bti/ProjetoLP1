#include <iostream>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <memory>
#include "animal.h"
#include "mamifero.h"

using namespace std;

Mamifero::Mamifero(string cor_pelo_) 
{
	cor_pelo = cor_pelo_;
}
Mamifero::~Mamifero() {}

string Mamifero::getCorPelo() {
	return cor_pelo;
}
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

Mamifero::Mamifero() {}
Mamifero::~Mamifero() {}

string Mamifero::getCorPelo() {
	return cor_pelo;
}

void Mamifero::setCorPelo(string cp) {
	cor_pelo = cp;
}	
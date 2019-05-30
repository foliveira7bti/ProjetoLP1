#include <iostream>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <memory>
#include "animal.h"
#include "anfibio.h"

using namespace std;

Anfibio::Anfibio() {}
Anfibio::~Anfibio() {}


int Anfibio::getTotalMudas() {
	return total_mudas;
}

void Anfibio::setTotalMUdas(int tm) {
	total_mudas = tm;
}

string Anfibio::getUltimaMuda() {
	return ultima_muda;
}

void Anfibio::setUltimaMuda(string um) {
	ultima_muda = um;
}


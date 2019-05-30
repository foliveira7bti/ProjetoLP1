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

Anfibio::Anfibio(int mudas, string data) 
{
	total_mudas = mudas;
	ultima_muda = data;
}
Anfibio::~Anfibio() {}


int Anfibio::getTotalMudas() {
	return total_mudas;
}

string Anfibio::getUltimaMuda() {
	return ultima_muda;
}



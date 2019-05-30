#include <iostream>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <memory>
#include "animal.h"
#include "ave.h"

using namespace std;





Ave::Ave(int tamanho_, int envergadura_)
{
	tamanho_bico = tamanho_;
	envergadura = envergadura_;
}
Ave::~Ave() {}


int Ave::getTamanhoBico() {
	return tamanho_bico;
}

int Ave::getEnvergadura() {
	return envergadura;
}
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





Ave::Ave() {}
Ave::~Ave() {}



int Ave::getTamanhoBico() {
	return tamanho_bico;
}

void Ave::setTamanhoBico(int tb) {
	tamanho_bico = tb;
}

int Ave::getEnvergadura() {
	return envergadura;
}

void Ave::setEnvergadura(int e) {
	envergadura = e;
}
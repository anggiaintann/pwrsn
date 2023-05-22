#include <iostream>
#include <string>
using namespace std;

#include "jtg.h"
#include "mns.h"

int main() {
	manusia* varManusia = new manusia("jono");
	delete varManusia;
	return 0;
}
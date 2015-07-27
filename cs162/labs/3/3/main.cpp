#include <string>
#include <iostream>
#include <fstream>
#include "./patient_account.h"
#include "./pharmacy.h"
#include "./surgery.h"

using namespace std;

int main() {
	patient lab;
	lab.add_meds();
	lab.add_surg();
	lab.checkout();
}

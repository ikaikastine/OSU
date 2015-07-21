#ifndef PATIENT_ACCOUNT_H
#define PATIENT_ACCOUNT_H
#include <string>
#include "./pharmacy.h"
#include "./surgery.h"

class patient {
private:
	float total_charge;
	int days;
	std::string name;
	surgery surg;
	pharmacy meds;
public:
	patient();
	patient(std::string);
	patient(const patient &);
	~patient();
	void add_surg();
	void add_meds();
	void checkout();
};

#endif

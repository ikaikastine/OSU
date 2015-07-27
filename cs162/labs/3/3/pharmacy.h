#ifndef PHARMACY_H
#define PHARMACY_H

class pharmacy {
private:
	float *amount;
	std::string *names;
	int types;
public:
	pharmacy();
	pharmacy(const pharmacy &);
	~pharmacy();
	float cost(int);
	std::string name(int);
	int type();
};

#endif
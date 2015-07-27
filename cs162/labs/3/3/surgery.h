#ifndef SURGERY_H
#define SURGERY_H

class surgery {
private:
	float *amount;
	std::string *names;
	int types;
public:
	surgery();
	surgery(const surgery &);
	~surgery();
	float cost(int);
	std::string name(int);
	int type();
};

#endif
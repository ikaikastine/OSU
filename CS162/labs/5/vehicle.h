#ifndef VEHICLE_H
#define VEHICLE_H

class vehicle {
	protected:
		int seats;
	public:
		vehicle();
		vehicle(int);
		int getSeats();
		virtual int getToll();
};

#endif
#pragma once
#include <iostream>
#include "Date.h"
#include "Packet.h"

class Contract
{
public:
	Contract();
	~Contract();

	friend std::ostream();
	friend std::istream();

private:
	std::string _name;
	int lenght;
	Date* _startDate;
	Date* _endDate;

	Packet* _packet;



};


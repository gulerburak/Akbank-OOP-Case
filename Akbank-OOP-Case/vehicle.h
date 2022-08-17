#pragma once
#include <string>
using namespace std;


class Vehicle {
public:
	string owner;
	string HGS_Number;
	string vehicle_type;
	int balance;
};

class Otomobil : public Vehicle
{
public:
	Otomobil(string owner, string HGS_Number, int balance)
	{
		this->owner = owner;
		this->HGS_Number = HGS_Number;
		this->vehicle_type = "1";
		this->balance = balance;
		cout << endl << "Otomobil " << owner << " " << HGS_Number << " olusturuldu." << endl;
	}
};

class Minibus : public Vehicle
{
	public:
	Minibus(string owner, string HGS_Number, int balance)
	{
		this->owner = owner;
		this->HGS_Number = HGS_Number;
		this->vehicle_type = "2";
		this->balance = balance;
		cout << endl << "Minibus " << owner << " " << HGS_Number << " olusturuldu." << endl;
	}
};

class Otobus : public Vehicle
{
	public:
	Otobus(string owner, string HGS_Number, int balance)
	{
		this->owner = owner;
		this->HGS_Number = HGS_Number;
		this->vehicle_type = "3";
		this->balance = balance;
		cout << endl << "Otobus " << owner << " " << HGS_Number << " olusturuldu." << endl;
	}
};
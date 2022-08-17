#pragma once
#include <string>
#include <queue>


class toll {
	friend class management;
	int passed_otomobil;
	int passed_minibus;
	int passed_otobus;
public:
	toll()
	{
		cout << "Gise olusturuldu." << endl;
		passed_otomobil = 0;
		passed_minibus = 0;
		passed_otobus = 0;
	}
	void pass(Otomobil& otomobil)
	{
		passed_otomobil++;
		otomobil.balance -= 80;
		print_balance(otomobil);
	}
	void pass(Minibus& minibus)
	{
		passed_minibus++;
		minibus.balance -= 120;
		print_balance(minibus);
	}
	void pass(Otobus& otobus)
	{
		passed_otobus++;
		otobus.balance -= 160;
		print_balance(otobus);
	}
	void print_balance(Vehicle& vehicle)
	{
		cout << endl << vehicle.HGS_Number << " HGS numarali aracin kalan bakiyesi " << vehicle.balance << endl;
	}
};
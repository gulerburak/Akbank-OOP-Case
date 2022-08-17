#include <iostream>
#include <deque>
#include "vehicle.h"
#include "toll.h"
#include "management.h"

using namespace std;

int main()
{
	// Yonetim olustur
	management yonetim = management();
	
	// Gise olustur
	toll gise = toll();
	
	// Araclarin giseden gecmesi icin kuyruklar olustur
	deque<Otomobil> otomobilKuyrugu;
	deque<Minibus> minibusKuyrugu;
	deque<Otobus> otobusKuyrugu;

	// Araclari kuyruklara ekle
	otomobilKuyrugu.push_back(Otomobil("Burak Guler", "001", 100));
	otomobilKuyrugu.push_back(Otomobil("Hakan Binbasgil", "002", 200));
	otomobilKuyrugu.push_back(Otomobil("Haci Omer Sabanci", "003", 0));

	minibusKuyrugu.push_back(Minibus("Burak Guler", "004", 100));
	minibusKuyrugu.push_back(Minibus("Hakan Binbasgil", "004", 200));
	minibusKuyrugu.push_back(Minibus("Haci Omer Sabanci", "005", 0));

	otobusKuyrugu.push_back(Otobus("Burak Guler", "006", 100));
	otobusKuyrugu.push_back(Otobus("Hakan Binbasgil", "007", 200));
	otobusKuyrugu.push_back(Otobus("Haci Omer Sabanci", "008", 0));
	
	// Araclari giseden gecir
	for (auto i : otomobilKuyrugu)
	{
		gise.pass(i);
	}
	for (auto i : minibusKuyrugu)
	{
		gise.pass(i);
	}
	for (auto i : otobusKuyrugu)
	{
		gise.pass(i);
	}

	// Yonetim kazanci hesaplar
	
	yonetim.calculateRevenue(gise);
	
	return 0;
}
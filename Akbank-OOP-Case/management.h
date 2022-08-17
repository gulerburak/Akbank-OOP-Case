#pragma once

class management
{
public:
	management()
	{
		cout << "Yonetim olusturuldu." << endl;
	}
	
	void calculateRevenue(toll &Gise)
	{
		int otomobilRevenue = 80 * Gise.passed_otomobil;
		int minibusRevenue = 120 * Gise.passed_minibus;
		int otobusRevenue = 160 * Gise.passed_otobus;
		int totalRevenue = otomobilRevenue + minibusRevenue + otobusRevenue;
		
		cout << endl << endl << "-------------------------------" << endl;
		cout << "Otomobillerden gelen kazanc: " << otomobilRevenue << endl;
		cout << "Minibuslerden gelen kazanc: " << minibusRevenue << endl;
		cout << "Otobuslerden gelen kazanc: " << otobusRevenue << endl;
		
		cout << "Toplam kazanc: " << totalRevenue << endl;
	}
};
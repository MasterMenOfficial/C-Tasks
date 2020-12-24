#include <iostream>
#include <string>

using namespace std;

/*
	| Task #2
	| ---------------------
	| Programmed by MasterMen
	| Start Date: 2020.11.18
	| Last Date: ?
*/

int main() {
	//setlocale(0,"")
	
	short SbjAm = 5;
	bool type = false;
	// false = debug
	// true = type
	
	string ActualInfoDate = "2020.09.07";
	struct Sub {
		string Name;
		int Population;
		int SicknessAmount;
		double Percent;
	};
	
	Sub Subject[SbjAm];
	
	string TempName;
	int TempPopulation;
	int TempSicknessAmount;
	double TempPercent;
	
	if (type) {
		for (int i = 0; i < SbjAm; i++) {
			cout << "Enter a Subject Name: ";
			cin >> TempName;
			cout << endl << "Enter a Subject Population: ";
			cin >> TempPopulation;
			cout << endl << "Enter a Sickness Amount: ";
			cin >> TempSicknessAmount;
			cout << endl << "Enter a Sickness Percent: ";
			cin >> TempPercent;
			
			Subject[i].Name = TempName;
			Subject[i].Population = TempPopulation;
			Subject[i].SicknessAmount = TempSicknessAmount;
			Subject[i].Percent = TempPercent;
		}
	}
	else {
		Subject[0].Name = "FIRST";
		Subject[0].Population = 1000;
		Subject[0].SicknessAmount = 500;
		Subject[0].Percent = 0.5;
		
		Subject[1].Name = "SECOND";
		Subject[1].Population = 1500;
		Subject[1].SicknessAmount = 1000;
		Subject[1].Percent = 0.6;
		
		Subject[2].Name = "THIRD";
		Subject[2].Population = 5000;
		Subject[2].SicknessAmount = 5000;
		Subject[2].Percent = 1.0;
		
		Subject[3].Name = "FOURTH";
		Subject[3].Population = 10;
		Subject[3].SicknessAmount = 7;
		Subject[3].Percent = 0.7;
		
		Subject[4].Name = "FIVE";
		Subject[4].Population = 10;
		Subject[4].SicknessAmount = 2;
		Subject[4].Percent = 0.2;
	};
	
	cout << endl << "Actual Info Date: " << ActualInfoDate << endl << endl;
	
	for (int i = 0; i < SbjAm; i++) {
		cout << "Subject: #" << i << ", " << Subject[i].Name << endl;
		cout << " | Population: " << Subject[i].Population << endl;
		cout << " | Sickness Amount: " << Subject[i].SicknessAmount << endl;
		cout << " | Sickness %: " << Subject[i].Percent << endl << endl;
	}
	
	short MaxID = 0;
	double MaxPerc = 0.0f;
	short MinID = 0;
	double MinPerc = 100.0f;
	
	for (int i = 0; i < SbjAm; i++) {
		// Max
		if (Subject[i].Percent > MaxPerc) {
			MaxPerc = Subject[i].Percent;
			MaxID = i;
		}
		if (Subject[i].Percent < MinPerc) {
			MinPerc = Subject[i].Percent;
			MinID = i;
		}
	}
	
	cout << "Most Sickness Subject is: " << Subject[MaxID].Name << endl;
	cout << "Most non Sickness Subject is: " << Subject[MinID].Name << endl;
	
	return 0;
}

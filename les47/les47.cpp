#include <iostream>
#include <string>
using namespace std;
int Points(int gold, int sil, int br) {return 7 * gold + 6 * sil + 5 * br;}
int main() {
	const int Team = 8;
	string Name[Team];
	int GoldMed[Team];
	int SilMed[Team];
	int BrMed[Team];
	int TotPop[Team];
	cout << "counts and teams";
	for (int i = 0; i < Team; ++i) {
		cin >> Name[i] >> GoldMed[i] >> SilMed[i] >> BrMed[i];
		TotPop[i] =Points(GoldMed[i], SilMed[i], BrMed[i]);
	}
	for (int i = 0; i < Team - 1; ++i) {
		for (int j = i + 1; j < Team; ++j) {
			if (TotPop[j] > TotPop[i]) {
				swap(Name[i], Name[j]);
				swap(GoldMed[i], GoldMed[j]);
				swap(SilMed[i], SilMed[j]);
				swap(BrMed[i], BrMed[j]);
				swap(TotPop[i], TotPop[j]);
	}
	}
	}
	for (int i = 0; i < Team; ++i) {
	cout << i + 1 << Name[i] << GoldMed[i]  << SilMed[i] << BrMed[i]  << GoldMed[i] + SilMed[i] + BrMed[i]<< TotPop[i] ;
}
}
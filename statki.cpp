#include <bits/stdc++.h>

using namespace std;

void wys(bool (&gracz)[10][10]){
		for(int k = 0; k < 10; k++) {
			cout << '|';
			for(int j = 0; j < 10; j++) {
				if(gracz[k][j])
					cout << 'O';
				else
					cout << ' ';
				cout << '|';
				//cout << gracz[k][j];
			}
			cout << "\n";
		}
}

void ustaw(bool (&gracz)[10][10]){
	for ( int i = 0; i < 10; i++) {
		cout << "Gdzie chcesz statek?\n";
		int statekposx = 0, statekposy = 0;
		cin >> statekposx >> statekposy;
		
		cout << "Jak chcesz miec ulozony statek?\n";
		string ulozenie = "";
		cin >> ulozenie;
		if (ulozenie == "pionowo") {
			gracz[statekposy][statekposx ] = 1;
			gracz[statekposy+1][statekposx ] = 1;
		}
		if (ulozenie == "poziomo") {
			gracz[statekposy][statekposx] = 1;
			gracz[statekposy][statekposx+1] = 1;
		}
		wys(gracz);
	}
	
}
bool gracz1[10][10];
bool gracz2[10][10];
int main(){
cout << "Graczu 1 podaj statki."
ustaw(gracz1);
cout << "Graczu 2 podaj statki."
ustaw(gracz2);







}













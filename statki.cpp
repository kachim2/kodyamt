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
	for ( int i = 0; i < 8; i++) {
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
cout << "Graczu 1 podaj statki.";
ustaw(gracz1);
system ("cls");
cout << "Graczu 2 podaj statki.";
cin >> gracz1[0][0];
ustaw(gracz2);

while(true){
	
	while(true){
	cout <<"Graczu 1 gdzie strzelasz?";
	int x, y;
	cin >>	x >> y;
	if(gracz2[x][y]){
		gracz2[x][y] = 0;
		cout << "trafiles";	
	} 
	else {
		cout << "chybiles"
	break;}
	}
		while(true){
	cout <<"Graczu 2 gdzie strzelasz?";
	int x, y;
	cin >>	x >> y;
	if(gracz1[x][y]){
		gracz1[x][y] = 0;
		cout << "trafiles";	
	} 
	else {
		cout << "chybiles"
	break;}
	}
}






}













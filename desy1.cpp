#include <iostream>
#include <cmath>
using namespace std;
int main(){
	//DEKLARASI VARIABEL
	double x[3][5]= {x[0][1],x[2][4]};
	double r[3][5]= {x[0][1],x[2][4]};
	double rw[3][5]= {x[0][1],x[2][4]};
		
	double w1,w2,w3,w4,w5;
	double maxc [5]= {maxc[0],maxc[4]};
	double ha1,ha2,ha3;
}
	// SETTING PRESISI DESIMAL
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(4);
	// ISI DATA
	w1=5;
	w2=3;
	w3=4;
	w4=4;
	w5=2;
	
	x[0][0]=4;
	x[0][1]=4;
	x[0][2]=5;
	x[0][3]=3;
	x[0][4]=3;
	
	x[1][0]=3;
	x[1][1]=3;
	x[1][2]=4;
	x[1][3]=2;
	x[1][4]=3;
	
	x[2][0]=5;
	x[2][1]=4;
	x[2][2]=2;
	x[2][3]=2;
	x[2][4]=2;
		// AMBIL NILAI MAX TIAP KRITERIA
	maxc[0]=max(x[0][0],max(x[1][0],x[2][0]));
	maxc[1]=max(x[0][1],max(x[1][1],x[2][1]));
	maxc[2]=max(x[0][2],max(x[1][2],x[2][2]));
	maxc[3]=max(x[0][3],max(x[1][3],x[2][3]));
	maxc[4]=max(x[0][4],max(x[1][4],x[2][4]));

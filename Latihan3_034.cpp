#include <iostream>
using namespace std;

int main(){
	int jml_index, max, nilai;
	
	cout<<"Banyak data = ";
	cin>>jml_index;
	cout<<"================"<<endl;
	
	for (int a=1; a<=jml_index; a++){
		cout<<"Masukkan Data ke-"<<a<<" = ";
		cin>>nilai;
		
		if (a == 1){
			max = nilai;
		} else {
			if(nilai > max){
				max=nilai;
			}
		}
	}
	cout<<"================"<<endl;
	cout<<"Nilai maksimal = " <<max<<endl;
	cout<<"Memory Address Nilai Maksimal = "<<&max;
	
}

#include<iostream>
using namespace std;

int jumlah(const char *i){
	int x = 0;
	for (; *i!='\0'; i++)
	++x;
	return x;
}

int main(void){
	char huruf[100];
	cout<<"Tuliskan kata\t: ";
	cin.getline(huruf,100);
	cout<<"\n";
	cout<<"Jumlah karakter\t: "<<jumlah(huruf);
}

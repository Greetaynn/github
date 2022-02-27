#include <iostream>
#include <cmath>
using namespace std;
int basari;
double sayi1;
double sayi2;
int islem;
int main()
{
	cout<< "DORT ISLEM MAKINESI"<<endl;
	cout<< "Birinci sayiyi giriniz: "<<endl;
	cin>>sayi1;
	cout<< "İkinci sayiyi giriniz"<<endl;
	cin>>sayi2;
	cout<< "İslem seciniz: (1=+ , 2=- , 3=* , 4=/)"<<endl;
	cin>>islem;
	switch(islem){
		case1:
			cout<<"Toplama sonucu: "<<sayi1+sayi2<<endl;
			break;
			case2:
				cout<<"Cikarma sonucu: "<<sayi1-sayi2<<endl;
				break;
				case3:
					cout<<"Carpma sonucu: "<<sayi1*sayi2<<endl;
					break;
					case4:
						cout<<"Bolme sonucu: "<<sayi1/sayi2<<endl;
						break;
						default:
							cout<<"Hatali sayi girdiniz. "<<endl;
	}
	return 0;
	
}

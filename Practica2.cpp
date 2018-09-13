#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

using namespace std;

double Vpositivo(double dinero, double totalpagar);

int main()
{
   
    double  P1, P2, Precio, PD, efectivo;
	int Product, R50, R20, R10, R5, R1, Rr25, Rr10, Rr5, Rr1, N100, N50, N20, N10, N5, N1, D25, D10=0, D5=0, D1=0, dinero, PE, PC;

	
	cout << "Inserte la cantidad de producto a pagar" << endl;
	cin>> Product;
	
	
	for(int i=1; i<=Product; i++)
	{
		 cout << "Inserte el precio del producto # " << i << ":" << endl;
		 cin>> P1;
		 Precio =+ P1;
	   }  
	
	efectivo = Vpositivo(dinero, Precio);
    dinero = efectivo;
    
    PE= efectivo / 1;
    PD = efectivo - PE;
   	PC = PD * 100;
   	
	N100 = dinero / 100;
	R50 = dinero % 100;
	
	N50 = R50 / 50;
	R20 = R50 % 50;
	
	N20 = R20 / 20;
	R10 = R20 % 20;
	
	N10 = R10 / 10;
	R5 = R10 % 10;
	
	N5 = R5 / 5;
	R1 = R5 % 5;

	N1 = R1 / 1;
	
	D25 = PC / 25;
	Rr10 = PC % 25;
	
	D10 = Rr10 / 10;
	Rr5 = Rr10 % 10;
	
	D5 = Rr5 / 5;
	Rr1 = Rr5 % 5;
	
	D1 = Rr1 / 1;
	
	cout<<"\n\n\n";
	cout<<setw(50)<<"Caja Registradora\n";
	cout<< "----------------------------------------------------------------------------------------"<<"\n"; 
	cout<< setw (7) << "$100 " <<setw(8)<<"$50 " <<setw(8)<<"$20" <<setw(9) <<"$10" <<setw(9) <<"$5" <<setw(9) <<"$1" <<setw(10) <<"25c" <<setw(9) <<"10c" <<setw(9) <<"5c" <<setw(9) <<"1c\n";
	cout<< "----------------------------------------------------------------------------------------"<<"\n"; 
	cout<< setw (5) << N100 <<setw(9)<< N50 <<setw(9)<< N20 <<setw(9) << N10 <<setw(9) << N5 <<setw(9) << N1 <<setw(9) << D25 <<setw(9) << D10 <<setw(9) << D5 <<setw(9) << D1<< "\n";
 
   return 0;
}

double Vpositivo(double dinero, double totalpagar){
	
	int a;

	
	cout<< "Introduzca la cantidad de dinero con la que va a pagar"<<endl;
	cin>>a;
		
	if(a<totalpagar){
		
		cout<< "El Dinero pagado es menor al consumido";

	}
	else 
	{
		dinero = a - totalpagar;
	
	}
	
	return (dinero);
}

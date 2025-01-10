#include <iostream>

int somma(int n1, int n2)
{
	int n = n1+n2;
	return n;
}

int main(int argc, char const *argv[])
{
	std::cout<<"hello World\n";

	int a = 0;

	if (a == 0) {
		a = 1;
	} else {
		a = 2;
	}

	std::cout<<"valore di a: "<<a<<"\n";

	std::cout<<"Conta fino a dieci\n";
	for (int i = 0; i < 10; ++i) {
		std::cout<<i;
	}

	int b = 10;
	int c = 5;

	int d = b + c;
	std::cout<<"somma di b e c: "<<d<<"\n";
	
	int e = somma(b,c);
	std::cout<<"somma di b e c con funzione: "<<e<<"\n";

	int f = somma(d,c);
	std::cout<<"somma di d e c con funzione: "<<f<<"\n";

	std::cout<<"Fine programma. Exit\n";
	
	return 0;
}

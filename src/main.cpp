#include <iostream>

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

	return 0;
}
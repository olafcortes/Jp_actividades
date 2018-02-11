#include <iostream>
using namespace std;
int main() 
{
	
	char letras = 'a' ;
	char continuidad = letras;
	for (int valor = 97;valor<123;valor++)
	{
		cout << "letra "<< continuidad <<","<< valor<< endl;
		
		if (continuidad != 122)
		{
			continuidad=continuidad+1;
		}
	}
	
	cin.get();
	return 0;
}

	
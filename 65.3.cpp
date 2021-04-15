#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class klasa
{
public:


	ifstream plik1;
     klasa();

};

klasa::klasa()
{
plik1.open("plik1.txt");
}
class algorytm
{
public:
    int licznik_zdarzen = 0;
    int nwd(int x, int y);

};

int algorytm::nwd(int x, int y)
{
while (x != y)
    if (x > y)
        x -= y;
    else
y -= x;
	return x;
}


int main()
{
klasa k;
     algorytm a;
int first_number, second_number;
while (!k.plik1.eof())
{

    k.plik1 >> first_number >>second_number;
    a.licznik_zdarzen += first_number /a.nwd(first_number, second_number);
	}
	cout << a.licznik_zdarzen;
}

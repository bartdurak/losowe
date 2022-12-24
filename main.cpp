#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int liczba ;
int main() {
cout << "Witajcie ! losowanie od 1 do 100"<< endl;
srand(time(NULL));
liczba = rand() % 100+1;
cout << liczba <<endl;

    return 0;
}

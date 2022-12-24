#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int liczba , strzal;
int main() {
cout << "Witajcie ! losowanie od 1 do 100"<< endl;
srand(time(NULL));
    liczba = rand() % 100+1;
    cout << liczba <<endl;

    while (strzal!=liczba)
    {
2        cout << "Zgadnij jaka to liczba: ";
        cin >> strzal;

        if (strzal==liczba)
            cout << "Udało sie"<< endl;
        else if (strzal<liczba)
            cout<< "to za mało "<<endl;

    }

    return 0;
}

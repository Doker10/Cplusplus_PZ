Завдання 1
#include <iostream>
using namespace std;

int main() {
    int N, mul, a1, a2, a3;
    cout << "Enter number from 100 to 999: ";
Again:
    cin >> N;
    if (N < 100 || N>999) {
        cout << "Please enter a valid number : ";
        goto Again;
    }
    a1 = N % 10;

    if (a1 % 2 == 0) {
        a1 = 1;
    }
    a2 = N / 10;
    a3 = a2 / 10;

    if (a3 % 2 == 0) {
        a3 = 1;
    }
    a2 %= 10;

    if (a2 % 2 == 0) {
        a2 = 1;
    }
    mul = a1 * a2 * a3;
    if (mul == 1) {
        mul--;
    }
    cout << "Product of even numbers = " << mul;
}

Завдання 2
#include <iostream>
#include <string>
using namespace std;

int main()
{
char nom;

cin>> nom;
switch (nom){
    case '0':
     cout << "Eng: Zero; " << "Deutsch: Null";
     break;
     case '1':
     cout << "Eng: One; " << "Deutsch: Eins";
     break;
     case '2':
     cout << "Eng: Two; " << "Deutsch: Zwei";
     break;
     case '3':
     cout << "Eng: Three; " << "Deutsch: Drei";
     break;
     case '4':
     cout << "Eng: Four; " << "Deutsch: Vier";
     break;
     case '5':
     cout << "Eng: Five; " << "Deutsch: Fünf";
     break;
     default:
     cout<<"ne pide";
}
cin.get();
cin.ignore ();
return 0;
}

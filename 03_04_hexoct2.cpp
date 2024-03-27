#include <iostream>
using namespace std;
int main()
{
    int chest = 42;
    int waist = 42;
    int inseam = 42;
    cout << "Monsieur cuts a striking figure!" << endl;
    cout << "chest = " << chest << " (decimal for 42) " << endl;
    cout << std::hex; // switch to hexadecimal output 
    cout << "waist = " << waist << " (hexadecimal for 42) " << endl;
    cout << std::oct; // switch to octal output
    cout << "inseam = " << inseam << " (octal for 42) " << endl;
    cout<<std::dec; // switch back to decimal output
    
    return 0;
}
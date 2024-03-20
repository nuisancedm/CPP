#include <iostream>
#define ZERO 0
#include <climits>

int main()
{
    using namespace std;
    short sam = SHRT_MAX;
    unsigned short sue = sam;

    cout << "Sam has " << sam << " dollars and Sue has " << sue << " dollars deposited" << endl;
    cout << "add $1 to each account." << endl;
    sam = sam + 1;
    sue = sue + 1;
    cout << "now Sam has " << sam << " dollars and Sue has " << sue << " dollars deposited" << endl;
    cout << endl;

    sam = ZERO;
    sue = ZERO;
    cout << "Sam has " << sam << " dollars and Sue has " << sue << " dollars deposited" << endl;
    cout << "take $1 from each account" << endl;
    sam = sam - 1;
    sue = sue - 1;
    cout << "now Sam has " << sam << " dollars and Sue has " << sue << " dollars deposited" << endl;
    cout << "Lucky Sue!" << endl;

    return 0;
}
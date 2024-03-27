#include <iostream>
int main()
{
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    float tub = 10.0 / 3.0;
    double mint = 10.0 / 3.0;
    const float million = 1.0e6;

    cout << "tub(float) = " << tub << endl;
    cout << "million(float) * tub(float) = " << million * tub << endl;
    cout << "10 * million * tub = " << 10 * million * tub << endl;

    cout << "mint(double) = " << mint << endl;
    cout << "million(float) * mint(double) " << million * mint << endl;
    return 0;
}

//@@ cout usually delete all 0 in the end of a number
//@@ use std::cout.setf to make cout print all 0.

//@@ 10/3 = 3.333333333333333333333333333333333333333
//@@ float is accruate in 6 bits after the decimal
//@@ double is accruate in 13 bits.
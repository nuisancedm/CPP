#include <iostream>
#include <climits>
#define ZERO 0

void function_03_01(); // limits
void function_03_02(); // exceed
void function_03_03(); // hexoct
void function_03_04(); // hexoct2
void function_03_05(); // chartype
void function_03_06(); // morechar
void function_03_07(); // bondini
void function_03_08(); // floatnum
void function_03_09(); // fltadd
void function_03_10(); // arith
void function_03_11(); // divide
void function_03_12(); // modulus

int main()
{
    function_03_12();
}

void function_03_01()
{
    // limits
    using namespace std;
    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    cout << "int is " << sizeof(int) << " bytes." << endl;
    cout << "short is " << sizeof(short) << " bytes." << endl;
    cout << "long is " << sizeof(long) << " bytes." << endl;
    cout << "long long is " << sizeof(long long) << " bytes." << endl;
    cout << endl;

    cout << "Maxinum Values:" << endl;
    cout << "int: " << n_int << endl;
    cout << "short: " << n_short << endl;
    cout << "long: " << n_long << endl;
    cout << "long long: " << n_llong << endl;
    cout << endl;

    cout << "Minimum int value = " << INT_MIN << endl;
    cout << "bits per byte = " << CHAR_BIT << endl;
}

void function_03_02()
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
}

void function_03_03()
{
    using namespace std;
    int chest = 42;   // decimal
    int waist = 0x42; // hexadecimal
    int inseam = 042; // octal

    cout << "Monsieur cuts a striking figure" << endl;
    cout << "chest = " << chest << " (42 in decimal)" << endl;
    cout << "waist = " << waist << " (0x42 in hex)" << endl;
    cout << "inseam = " << inseam << " (042 in octal)" << endl;
}

void function_03_04()
{
    using namespace std;
    int chest = 42;
    int waist = 42;
    int inseam = 42;
    cout << "Monsieur cuts a striking figure!" << endl;
    cout << "chest = " << chest << " (decimal for 42) " << endl;
    cout << std::hex; // switch to hexadecimal output
    cout << "waist = " << waist << " (hexadecimal for 42) " << endl;
    cout << std::oct; // switch to octal output
    cout << "inseam = " << inseam << " (octal for 42) " << endl;
    cout << std::dec; // switch back to decimal output
}

void function_03_05()
{
    using namespace std;
    char ch; // declare a char variable

    cout << "Enter a character: " << endl;
    cin >> ch;                                          // read a character from user
    cout << "Hola! thanks for entering " << ch << endl; // print the character entered by the user
}

void function_03_06()
{
    using namespace std;
    char ch = 'M';
    int i = ch;
    cout << "The ASCII value of " << ch << " is " << i << endl;

    cout << "Add one to the charcter code:" << endl;
    ch = ch + 1;
    i = ch;
    cout << "The ASCII value of " << ch << " is " << i << endl;

    // using the cout.put() member function to display a char
    cout << "Display the character using cout.put():" << endl;
    cout.put(ch);
    cout << endl;
    // using cout.put() to display a char contant
    cout << "Display the character constant using cout.put():" << endl;
    cout.put('!');
}

void function_03_07()
{
    using namespace std;
    cout << "\aOperation \"HyperHype\" is now activated!\n";
    cout << "Enter your agent code:________\b\b\b\b\b\b\b\b";
    long code;
    cin >> code;
    cout << "\aYou entered " << code << "...\n";
    cout << "\aCode verified! Procees with Plan Z3!\n";
}

void function_03_08()
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

    //@@ cout usually delete all 0 in the end of a number
    //@@ use std::cout.setf to make cout print all 0.

    //@@ 10/3 = 3.333333333333333333333333333333333333333
    //@@ float is accruate in 6 bits after the decimal
    //@@ double is accruate in 13 bits.
}

void function_03_09()
{
    using namespace std;
    float a = 2.34E+22f; // 2.34^22
    float b = a + 1.0f;

    cout << "a =" << a << endl;
    cout << "b - a =" << b - a << endl;

    // 浮点数可以表示整数之间的值，且因为缩放因子的存在可以表示很大范围的数
    // 但是浮点数运算速度比整数慢，并且精度很低
    // 由于float只能记录数字的前6位或者前7位，所以float的精度不支持b在a的第23位加上1
    // 最后会打印0
}

void function_03_10()
{
    using namespace std;
    float hats, heads;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << "enter a number: ";
    cin >> hats;
    cout << "enter another number: ";
    cin >> heads;

    cout << "hats = " << hats << "; heads = " << heads << endl;
    cout << "hats + heads = " << hats + heads << endl;
    cout << "hats - heads = " << hats - heads << endl;
    cout << "hats * heads = " << hats * heads << endl;
    cout << "hats / heads = " << hats / heads << endl;
}

void function_03_11()
{
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);

    cout << "integer division: 9/5 = " << 9 / 5 << endl;
    cout << "floating-point division :9.0/5.0 = " << 9.0 / 5.0 << endl;
    cout << "mixed division: 9.0/5 = " << 9.0 / 5 << endl;
    cout << "double constants:1e7/9.0 = " << 1.e7 / 9.0 << endl;
    cout << "double constants:1e7f/9.0f = " << 1.e7f / 9.0f << endl;

    // 9/5=1
    // 9.0/5.0=1.800000
    // 9.0/5 = 1.800000
    // 1e7/9.0 = 1111111.111111
    // 1e7f/9.0f = 1111111.125000 损失精度
}

void function_03_12()
{
    using namespace std;
    const int Lbs_per_stn = 14;
    int lbs;

    cout << "enter your weight in pounds: ";
    cin >> lbs;
    int stone = lbs / Lbs_per_stn;
    int pounds = lbs % Lbs_per_stn;

    cout << lbs << " pounds are " << stone << " stone, " << pounds << " pounds(s)." << endl;
    // 取模运算只能用于整数
}
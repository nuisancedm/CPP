#include <climits>
#include <iostream>
#include <typeinfo>

int main()
{
    using std::cout;
    using std::endl;

    // bool int long long long float double等数据类型之间的区别只有占用内存多少的区别
    // 什么类型用来做什么事，只取决于变量需要的空间大小，或者更多的是约定俗成

    // 整型大小 这取决于编译器
    cout << "bits per byte: " << CHAR_BIT << endl;                     // 8 bytes
    cout << "int is " << sizeof(int) << " bytes." << endl;             // 4
    cout << "short is " << sizeof(short) << " bytes." << endl;         // 2
    cout << "long is " << sizeof(long) << " bytes." << endl;           // 4
    cout << "long long is " << sizeof(long long) << " bytes." << endl; // 8
    cout << endl;

    // 整型上限
    cout << "Maximum Values" << endl;
    cout << "int: " << INT_MAX << endl;         // 2147483647
    cout << "short: " << SHRT_MAX << endl;      // 32767
    cout << "long: " << LONG_MAX << endl;       // 2147483647
    cout << "long long: " << LLONG_MAX << endl; // 9223372036854775807
    cout << "unsign int: " << UINT32_MAX << endl; // 4294967295 无符号int第一位不再代表符号，32bit都可以用来代表数

    cout << endl;

    // 整型下限
    cout << "Minimum Values" << endl;
    cout << "int: " << INT_MIN << endl;         // -2147483648
    cout << "short: " << SHRT_MIN << endl;      // -32768
    cout << "long: " << LONG_MIN << endl;       // -2147483648
    cout << "long long: " << LLONG_MIN << endl; // -9223372036854775808
    cout << endl;

    // 初始化
    cout << "Initialize Difference" << endl;
#define print(X, Y) std::cout << X << Y << std::endl;
    int a = 1;
    int b(2);
    int c{3};
    int d = {4};
    int e{};
    int f = {};
    int g;

    print("a = ", a); // 1
    print("b = ", b); // 2
    print("c = ", c); // 3
    print("d = ", d); // 4
    print("e = ", e); // 0
    print("f = ", f); // 0
    print("g = ", g); // 和内存残留有关
    cout << endl;

    // 整型越界测试
    cout << "leak test" << endl;

    short short_max = SHRT_MAX;
    cout << "type of short_max is " << typeid(short_max).name() << endl;           // short
    cout << "short_max + 1 = " << short_max + 1 << "    type of short_max + 1 is " // 32768 int
         << typeid(short_max + 1).name() << endl;
    cout << endl;

    unsigned short unsigned_short_max = USHRT_MAX;
    cout << "type of unsigned_short_max is " << typeid(unsigned_short_max).name() // t
         << endl;
    cout << "unsigned_short_max + 1 = " << unsigned_short_max + 1 << "    type of unsigned_short_max + 1 is "
         << typeid(unsigned_short_max + 1).name() << endl; // 65536 int
    cout << endl;

    int int_max = INT_MAX;
    cout << "int_max + 1 = " << int_max + 1 << "    type of int_max + 1 is " //-2147483648 int
         << typeid(int_max + 1).name() << endl;
    cout << endl;

    // 字面值测试
    cout << "10,8,16:" << endl;
    int num10 = 42;
    int num8 = 042;
    int num16 = 0x42;
    print("num10=", num10);            // 42
    print("num8=", num8);              // 34
    print("num16=", num16);            // 66
    cout << std::hex << num10 << endl; // 2a
    cout << std::oct << num10 << endl; // 52
    cout << endl;
    cout << std::dec;

    // CHAR类型
    // chars虽然常用来处理字符，但是他可以被看作是一种比short更小的的整型
    char ch1 = 'A';
    char ch2 = 65;
    //   数据类型会影响cout的行为，char一定会被打印成字符
    cout << "ch1=" << ch1 << endl;                                    // A
    cout << "ch2=" << ch2 << endl;                                    // A
    cout << "ch1+1=" << ch1 + 1 << endl;                              // 66
    cout << "cast ch1+1=" << static_cast<char>(ch1 + 1) << std::endl; // B
    ch1 = ch1 + 1;
    cout << "ch1 = ch1 + 1=" << ch1 << endl; // B

    float vf1 = 5.5;  // 5.5 is a double, but vf1 is a float, 4 bytes large
    float vf2 = 5.5f; // it is a float, 4 byte large
    double vd = 5.2;  // it is a double

    cout << sizeof(vf1) << endl; // 4
    cout << sizeof(vf2) << endl; // 4
    cout << sizeof(vd) << endl;  // 8

    bool bl = true; // 1byte

    return 0;
}
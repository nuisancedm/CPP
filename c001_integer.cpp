#include <climits>
#include <iostream>
#include <typeinfo>

int main() {
  using std::cout;
  using std::endl;

  // 整型大小
  cout << "bits per byte: " << CHAR_BIT << endl;                      // 8
  cout << "int is " << sizeof(int) << " bytes." << endl;              // 4
  cout << "short is " << sizeof(short) << " bytes." << endl;          // 2
  cout << "long is " << sizeof(long) << " bytes." << endl;            // 4
  cout << "long long is " << sizeof(long long) << " bytes." << endl;  // 8
  cout << endl;

  // 整型上限
  cout << "Maximum Values" << endl;
  cout << "int: " << INT_MAX << endl;            // 2147483647
  cout << "short: " << SHRT_MAX << endl;         // 32767
  cout << "long: " << LONG_MAX << endl;          // 2147483647
  cout << "long long: " << LLONG_MAX << endl;    // 9223372036854775807
  cout << "unsign int: " << UINT32_MAX << endl;  // 4294967295

  cout << endl;

  // 整型下限
  cout << "Minimum Values" << endl;
  cout << "int: " << INT_MIN << endl;          // -2147483648
  cout << "short: " << SHRT_MIN << endl;       // -32768
  cout << "long: " << LONG_MIN << endl;        // -2147483648
  cout << "long long: " << LLONG_MIN << endl;  // -9223372036854775808
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

  print("a = ", a);  // 1
  print("b = ", b);  // 2
  print("c = ", c);  // 3
  print("d = ", d);  // 4
  print("e = ", e);  // 0
  print("f = ", f);  // 0
  print("g = ", g);  // 和内存残留有关
  cout << endl;

  // 整型越界测试
  cout << "leak test" << endl;

  short short_max = SHRT_MAX;
  cout << "type of short_max is " << typeid(short_max).name() << endl;  // short
  cout << "short_max + 1 = " << short_max + 1
       << "    type of short_max + 1 is "  // 32768 int
       << typeid(short_max + 1).name() << endl;
  cout << endl;

  unsigned short unsigned_short_max = USHRT_MAX;
  cout << "type of unsigned_short_max is "
       << typeid(unsigned_short_max).name()  // t
       << endl;
  cout << "unsigned_short_max + 1 = " << unsigned_short_max + 1
       << "    type of unsigned_short_max + 1 is "
       << typeid(unsigned_short_max + 1).name() << endl;  // 65536 int
  cout << endl;

  int int_max = INT_MAX;
  cout << "int_max + 1 = " << int_max + 1
       << "    type of int_max + 1 is "  //-2147483648 int
       << typeid(int_max + 1).name() << endl;
  cout << endl;

  // 字面值测试
  cout << "10,8,16:" << endl;
  int num10 = 42;
  int num8 = 042;
  int num16 = 0x42;
  print("num10=", num10);             // 42
  print("num8=", num8);               // 34
  print("num16=", num16);             // 66
  cout << std::hex << num10 << endl;  // 2a
  cout << std::oct << num10 << endl;  // 52
  

  return 0;
}
#include <iostream>
int main()
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
    cout<<endl;
    // using cout.put() to display a char contant
    cout << "Display the character constant using cout.put():" << endl;
    cout.put('!');
}
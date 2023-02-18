#include <iostream>

using namespace std;

int main()
{
    char character;
    cout << "Enter a character : ";
    cin >> character;
    cout << "previous character is : " << --character << endl;
    return 0;
}
#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Enter the size of the triangle you need, please use small number : ";
    int input_number = 0;
    cin >> input_number;
    for(int index = input_number; index > 0 ; index--)
    {
        cout << std::string(index, '*') << endl;
    }
    return 0;
}
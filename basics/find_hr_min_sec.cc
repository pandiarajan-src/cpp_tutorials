#include <iostream>

using namespace std;

int main()
{
    int input_seconds;
    cout << "Enter a seconds : ";
    cin >> input_seconds;
    int hr = (int)(input_seconds/3600);
    int min = (int)((input_seconds%3600)/60);
    int sec = (int)((input_seconds%3600)%60);
    cout << "Hr: " << hr << " Min: " << min << " Sec: " << sec << endl;
    return 0;
}
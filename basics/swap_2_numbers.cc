#include <iostream>

using namespace std;

void print(const int& a , const int& b, bool input = true)
{
    std::string inp = "input";
    if(input == false)
        inp = "output";
#ifdef __cpp_lib_format
    cout << std::format("%s numbers are a: %d, b: %d\n", inp, a, b);
#else
    cout << inp << " numbers are a: " << a << " b: " << b << endl;
#endif  
}


void swap_2_numbers_naive(int& a, int& b) //cppcheck-suppress "unusedFunction"
//cppcheck-suppress "unusedFunction"
{

    print(a, b);
    int temp = a;
    a = b;
    b = temp;
    print(a, b, false);
}
//cppcheck-suppress "unusedFunction"

void swap_2_numbers(int &a, int &b)
{
    print(a, b);
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    print(a, b, false);
}

int main()
{
    int a = 7, b = 5;
    //swap_2_numbers_naive(a, b);
    swap_2_numbers(a, b);
    return 0;
}
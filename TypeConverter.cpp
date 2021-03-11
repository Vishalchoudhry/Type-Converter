#include <iostream>
void type(int Bt)
{
    std::cout << "Byte: " << Bt;
    std::cout << "\nKB: " << Bt / 1024;
    std::cout << "\nMB: " << Bt / (1024 * 1024);
    std::cout << "\nGB: " << Bt / (1024 * 1024 * 1024);
    std::cout << "\nQUIT!.";
    int out;
    std::cin >> out;
};
int main()
{
    std::cout << "ENTER BYTE:";
    int bt;
    std::cin >> bt;

    type(bt);
    return 0;
};

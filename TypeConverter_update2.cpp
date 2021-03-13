#include <iostream>
float ByteToKB(long long int Byte)
{
    return (float)Byte / 1024;
};
float KBToMB(float KB)
{
    return (float)KB / 1024;
};
float MBToGB(float MB)
{
    float GB{(float)MB / 1024};
    return GB;
    // if (GB >= (float)1)
    // {
    //     return GB;
    // }
    // else
    // {
    //     std::cout << "Sorry Size is Less Then 1!.\n";
    //     return 0;
    // };
};
float GBToTB(float GB)
{
    float TB{(float)GB / 1024};
    return TB;
    // if (TB >= (float)1)
    // {
    //     return TB;
    // }
    // else
    // {
    //     std::cout << "\nSorry Size is Less Then 1!.\n";
    //     return 0;
    // };
};
void Finale(long long int Byte)
{
    std::cout << "\nByte: " << Byte;
    std::cout << "\nKB: " << ByteToKB(Byte);
    std::cout << "\nMB: " << KBToMB(ByteToKB(Byte));
    std::cout << "\nGB: " << MBToGB(KBToMB(ByteToKB(Byte)));
    std::cout << "\nTB: " << GBToTB(MBToGB(KBToMB(ByteToKB(Byte))));
};

int main()
{
    std::string input;
    do
    {
        std::cout << "Enter Data In Byte: :";
        long long int bt;
        std::cin >> bt;
        Finale(bt);
        std::cout << "\nWould You Like To Run Again TC Software ?";

        std::cin >> input;
    } while (input == "yes" || input == "YES" || input == "Yes" || input == "Yeah" || input == "yeah");
    std::cout << "\n\nQUIT!.";
    int q;
    std::cin >> q;

    return 0;
};

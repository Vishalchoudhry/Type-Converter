#include <iostream>
float ByteToKB(int Byte)
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
    if (GB >= (float)1)
    {
        return GB;
    }
    else
    {
        std::cout << "\n Sorry Size is Less Then 1!.\n";
        return 0;
    };
};
float GBToTB(float GB)
{
    float TB{(float)GB / 1024};
    if (TB >= (float)1)
    {
        return TB;
    }
    else
    {
        std::cout << "\nSorry Size is Less Then 1!.\n";
        return 0;
    };
};
void Finale(int Byte)
{
    std::cout << "\nByte: " << Byte;
    std::cout << "\nKB: " << ByteToKB(Byte);
    std::cout << "\nMB: " << KBToMB(ByteToKB(Byte));
    std::cout << "\nGB: " << MBToGB(KBToMB(ByteToKB(Byte)));
    std::cout << "\nTB: " << GBToTB(MBToGB(KBToMB(ByteToKB(Byte))));
    std::cout << "\n\nQUIT!.";
    int q;
    std::cin >> q;
};

int main()
{
    std::cout << "ENTER BYTE:";
    int bt;
    std::cin >> bt;
    Finale(bt);
    return 0;
};

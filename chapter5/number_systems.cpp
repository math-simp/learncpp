#include <bitset>  // for std::bitset
#include <iomanip> // for std::setw (which sets the width of the subsequent output)
#include <iostream>

int main()
{
    const int width = 16;
    int x_octal{013235};    // 0 before the number means this is octal
    int x_hex{0x13235};     // 0x before the number means this is hexadecima
    std::cout << std::left; // left justify output

    std::cout << std::setw(width) << "x_octal in decimal: " << std::dec << x_octal << '\n';
    std::cout << std::setw(width) << "x_octal in octal: " << std::oct << x_octal << '\n';
    std::cout << std::setw(width) << "x_hex in decimal: " << std::dec << x_hex << '\n';
    std::cout << std::setw(width) << "x_hex in hex: " << std::hex << x_hex << '\n';
    std::cout << std::endl;

    int bin{};    // assume 16-bit ints
    bin = 0x0001; // assign binary 0000 0000 0000 0001 to the variable
    bin = 0x0002; // assign binary 0000 0000 0000 0010 to the variable
    bin = 0x0004; // assign binary 0000 0000 0000 0100 to the variable
    bin = 0x0008; // assign binary 0000 0000 0000 1000 to the variable
    bin = 0x0010; // assign binary 0000 0000 0001 0000 to the variable
    bin = 0x0020; // assign binary 0000 0000 0010 0000 to the variable
    bin = 0x0040; // assign binary 0000 0000 0100 0000 to the variable
    bin = 0x0080; // assign binary 0000 0000 1000 0000 to the variable
    bin = 0x00FF; // assign binary 0000 0000 1111 1111 to the variable
    bin = 0x00B3; // assign binary 0000 0000 1011 0011 to the variable
    bin = 0xF770; // assign binary 1111 0111 0111 0000 to the variable

    bin = 0b1;        // assign binary 0000 0000 0000 0001 to the variable
    bin = 0b11;       // assign binary 0000 0000 0000 0011 to the variable
    bin = 0b1010;     // assign binary 0000 0000 0000 1010 to the variable
    bin = 0b11110000; // assign binary 0000 0000 1111 0000 to the variable

    int bin_separator{0b1011'0010};      // assign binary 1011 0010 to the variable
    long value_separator{2'132'673'462}; // much easier to read than 2132673462

    // std::bitset<8> means we want to store 8 bits
    std::bitset<8> bin1{0b1100'0101}; // binary literal for binary 1100 0101
    std::bitset<8> bin2{0xC5};        // hexadecimal literal for binary 1100 0101
    std::bitset<16> bin3{0x1624};

    std::cout
        << bin1 << '\n'
        << bin2 << '\n'
        << bin3 << '\n';
    std::cout << std::bitset<4>{0b1010} << '\n'; // create a temporary std::bitset and print

    return 0;
}
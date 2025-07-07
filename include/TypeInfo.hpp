#include <iomanip>
#include <iostream>
#include <climits>
#include <string>

#define PRINT_TYPE_INFO(type, width) \
    print_type_info<type>(#type, width)

template <typename Type>
void print_type_info(std::string type_str, const int width)
{
    std::cout << std::setw(width) << type_str + ": " << sizeof(Type) << " bytes\n";
}
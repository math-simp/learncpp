#include <bitset>
#include <cstdint>
#include <iostream>

int main()
{
    [[maybe_unused]] constexpr std::uint8_t option_viewed{0x01};    // 0000 0001
    [[maybe_unused]] constexpr std::uint8_t option_edited{0x02};    // 0000 0010
    [[maybe_unused]] constexpr std::uint8_t option_favorited{0x04}; // 0000 0100
    [[maybe_unused]] constexpr std::uint8_t option_shared{0x08};    // 0000 1000
    [[maybe_unused]] constexpr std::uint8_t option_deleted{0x10};   // 0001 0000

    std::uint8_t myArticleFlags{option_favorited};
    myArticleFlags |= option_viewed;
    if (myArticleFlags & option_deleted)
    {
    }

    myArticleFlags &= static_cast<std::uint8_t>(~option_favorited);

    std::cout << std::bitset<8>{myArticleFlags} << '\n';

    return 0;
}
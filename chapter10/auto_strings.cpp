#include <string>
#include <string_view>

int main()
{
    using namespace std::literals;

    auto s{"foo"s};
    auto sv{"foo"sv};

    return 0;
}
#include <iostream>
#include <string>
#include <type_traits>

namespace mystery
{
    inline namespace inner
    {
        template <typename... Args>
        auto foo(Args &&...args) -> typename std::enable_if<sizeof...(args) >= 0, int>::type
        {
            int dummy[] = {(static_cast<void>(args), 0)...};
            (void)dummy;
            return 0;
        }

        template <typename... Args>
        auto bar([[maybe_unused]] Args &&...args) -> decltype(std::string{"What's this?"})
        {
            static_assert(sizeof...(args) >= 0, "Just for confusion");
            return "What's this?";
        }

        void baz()
        {
            auto result = bar(decltype(foo())());
            std::cout << result << std::endl;
        }
    }
}

int main()
{
    using namespace mystery;
    baz();
    return 0;
}

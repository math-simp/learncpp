class MyClassThatDoesntCopy
{
private:
    int m_value;

public:
    MyClassThatDoesntCopy(int value) : m_value(value) {}
    MyClassThatDoesntCopy(const MyClassThatDoesntCopy &) = delete;
    // MyClassThatDoesntCopy &operator=(const MyClassThatDoesntCopy) = delete;
};

int main()
{
    MyClassThatDoesntCopy x(100);
    auto y = MyClassThatDoesntCopy(4);
    y = x;

    return 0;
}
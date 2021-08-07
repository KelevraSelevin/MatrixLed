#include <iostream>

class LedText
{
public:
    // Длина строки
    int8_t lenghtString = 0;

    void GetString()
    {
        std::cout << "This message from Class" << std::endl;
    }

private:
    int a;
};

int main()
{
    LedText text;

    text.GetString();

    return 0;
}
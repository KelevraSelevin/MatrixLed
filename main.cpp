#include <iostream>

#include <cstring>

char parseString[100];

int matrixSymbol[3][15] = {
    {1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 0, 1},
    {1, 1, 1, 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 1, 1},
    {1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1}};


class LedText
{
public:

    // Длина строки
    int8_t lenghtString = 0;

    // Временна строка для работы
    char tempString[100] = "";

    void SetString(char *inputString, int lenght)
    {
        for (int i = 0; i < lenght; i++)
        {
            tempString[i] = inputString[i];
        }

        ToLowerString();
    }

    void ToLowerString()
    {
        for (int i = 0; i < strlen(tempString); i++)
        {
            tempString[i] = tolower(tempString[i]);
        }
    }

    void GetString()
    {
        std::cout << tempString << std::endl;
    }

private:
    int a;
};

int main()
{
    LedText text;

    char stringInput[100] = "HellO WoRlD";

    text.SetString(stringInput, strlen(stringInput));

    text.GetString();

    return 0;
}
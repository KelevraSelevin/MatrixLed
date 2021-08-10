#include <iostream>

#include <cstring>

int matrixSymbol[10][15] = {
    {1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 0, 1},
    {1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 0, 1},
    {1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 0, 1},
    {1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 0, 1},
    {1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 0, 1},
    {1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 0, 1},
    {1, 1, 1, 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 1, 1},
    {1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 0, 1},
    {1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 0, 1},
    {1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1}};

class LedText
{

public:
    /// Размер матрицы
    /// В моем случае пока сделаю жестко заданный размер
    /// Под моё кол-во диодов. Желательно переделать под любое кол-во
    //TODO: Сделать возможность разных размеров матрицы
    int matrixLed[5][17];

    LedText()
    {
        for (int y = 0; y < 5; y++)

            for (int x = 0; x < 17; x++)
            {
                matrixLed[y][x] = 0;
            }
    }

    /// Метод принимающий строку
    /// Копирует эту строку в строку класса.
    /// Приводит строку класса к нижнему регистру
    void SetString(char *inputString, int lenght)
    {
        for (int i = 0; i < lenght; i++)
        {
            tempString[i] = inputString[i];
        }

        ToLowerString();
    }

    /// Метод приводит строку класса к нижнему регистру
    void ToLowerString()
    {
        for (int i = 0; i < strlen(tempString); i++)
        {
            tempString[i] = tolower(tempString[i]);
        }
    }

    /// Выводит сроку. Но вообще это врменный метод. отадочный чтоли
    void ShowInformation()
    {
        //std::cout << tempString << std::endl;

        std::cout << "Input String" << std::endl;
        for (int i = 0; i < strlen(tempString); i++)
        {
            std::cout << SymbolToNumber(i) << "---";
        }


        std::cout << "" << std::endl;
        std::cout << "Matrix Led" << std::endl;
        for (int y = 0; y < 5; y++)
        {
            for (int x = 0; x < 17; x++)
            {
                std::cout << matrixLed[y][x] << " ";
            }
            std::cout << "" << std::endl;
        }
    }

private:
    // Временная строка для работы
    char tempString[100] = "";

    /// Здесь будет метод записывающий в матрицу символы.
    void WriteSymbolsToMatrix()
    {
        for (int i = 0; i < strlen(tempString); i++)
        {
            SymbolToNumber(i);
        }
    }

    ///
    int SymbolToNumber(int index)
    {
        return (int)tempString[index] - 48;
    }
};

int main()
{
    LedText text;

    char parseString[100] = "12 : 56";

    text.SetString(parseString, strlen(parseString));

    text.ShowInformation();

    return 0;
}
#include <iostream>
#include <string.h>

using namespace std;

char parseString[100];

int matrixSymbol[3][15] = {
    {1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 0, 1},
    {1, 1, 1, 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 1, 1},
    {1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1}};

/* class LedText
{
public:
    LedText();

    // Длина строки
    int8_t lenghtString = 0;

    // Временна строка для работы
    char tempString[100] = "";
    
    void SetString(char *inputString, int lenght)
    {
        for(int i = 0; i < lenght; i++)
        {
            tempString[i] = inputString[i];
        }

        ToLowerString();
    }

    void GetString()
    { std::cout << "wetetet" << std::endl;}
 
    //private:
    // Принимаю строку.
    // Привожу ее к нижнему регистру
         void ToLowerString()
    {
        for (int i = 0; i < strlen(tempString); i++)
        {
            tempString[i] = tolower(tempString[i]);
        }
    } 
};
 */
int main()
{
std::cout << "Huli" << std::endl;
//    LedText text;

  //  text.GetString();

    //char test[100] = "sDf g#43 hJ";

    //text.SetString(test, strlen(test));

    //text.GetString();
    //char HH[4] = "237";

    //int yyy = atoi(HH[1]) ;

    //std::cout << yyy + 67 << std::endl;

    //  char stringTest[] = itoa(12);

    // strcat(stringTest, " ");

    //    ParseString("11:26 RewRITE test");

    /*  for (int i = 0; i < strlen(parseString); i++)
    {
        std::cout << parseString[i] << "><";
    }

    std::cout << "" << std::endl;
 */
    return 0;
}
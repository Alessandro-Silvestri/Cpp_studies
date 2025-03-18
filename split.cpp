/*

split(<string>, <char>)
return vector

It converts a test in a vector of words according a given delimiter.
Author: Alessandro Silvestri

*/

#include <iostream>
#include <vector>

std::vector<std::string> split(std::string text, char delimiter = ' ')
{
    std::vector<std::string> vecResult;
    std::string tempString = "";
    for (char letter : text)
    {
        if (letter == delimiter)
        {
            vecResult.push_back(tempString);
            tempString = "";
        }
        else
        {
            tempString += letter;
        }
    }
    vecResult.push_back(tempString);
    return vecResult;
}

int main()
{

    return 0;
}
/*
The program asks the user some numbers and stores the in a list (vector).
The user has the chance to:
  * print the numbers
  * add numbers
  * calculate the mean
  * find the smallest number
  * find the largest number
  solved by Alessandro SIlvestri <alessandro.silvestri.work@gmail.com>
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
   vector<int> numbers{};
   char userInput{};
   int userInputInt{};
   double sum{};
   double mean{};
   int smallest{};
   int largest{};
  
   while (userInput != 'q' && userInput != 'Q')
   {
       cout << "\n\nP - Print numbers" << endl;
       cout << "A - Add number" << endl;
       cout << "M - Display mean of numbers" << endl;
       cout << "S - Display smallest number" << endl;
       cout << "L - Display largest number" << endl;
       cout << "Q - Quit \n"
            << endl;
       cout << "Enter your choice: ";
       cin >> userInput;

       switch (userInput)
       {
       case 'P':
       case 'p':
           cout << "[ ";
           for (int num : numbers)
           {
               cout << num << " ";
           }
           cout << "]";
           numbers.size() == 0 ? cout << " - the list is empty \n" : cout << "\n";
           break;
       case 'A':
       case 'a':
           cout << "Enter an integer to add to the list: ";
           cin >> userInputInt;
           numbers.push_back(userInputInt);
           cout << userInputInt << " added";
           break;
       case 'M':
       case 'm':
           if (numbers.size() > 0)
           {
               for (int num : numbers)
               {
                   sum += num;
               }
               mean = sum / numbers.size();
               cout << mean << " is the mean";
           }
           else
           {
               cout << 0 << " is the mean";
           }
           break;
       case 'S':
       case 's':
           if (numbers.size() > 0)
           {
               smallest = numbers[0];
           }
           for (int num : numbers)
           {
               if (num < smallest)
               {
                   smallest = num;
               }
           }
           cout << smallest << " is the smallest number";
           break;
       case 'L':
       case 'l':
           if (numbers.size() > 0)
           {
               int largest = numbers[0];
           }
           for (int num : numbers)
           {
               if (num > largest)
               {
                   largest = num;
               }
           }
           cout << largest << " is the largest number";
           break;
       case 'Q':
       case 'q':
           cout << "Program ended, goodbye!" << endl;
           break;
       default:
           cout << "Wrong choice, please try again" << endl;
           break;
       }
   }
   return 0;
}

//kellie Henderson 10-9-2019
/*
Using a Bubble Sort Algorithm,  sort the contents of the following array in descending order.
double numbers[7] = {23.6, 46.7, 12.7, 35.1,54.88,78.7,100.5};
Display the sorted array to the screen, and set the precision of the displayed numbers to 3 decimal places past the decimal.
*/

#include <iostream>
#include <iomanip>
using namespace std;

void printArray(double[], int); //pass array as parameter, and its size... void: cleaner call and does not return data
void sortArrDesc(double[], int);

int main() 
{
  string color = "\x1b[" + to_string(32) + ";"+to_string(32)+"m";
string reset = "\x1b[0m";
  cout << fixed << setprecision(3.0);
  double numbers[7] = {23.6, 46.7, 12.7, 35.1,54.88,78.7,100.5};
  int numbers_array_size = sizeof(numbers)/sizeof(double);

  sortArrDesc(numbers, numbers_array_size);
  return 0;
}

//function definitions.
void printArray(double array[], int size)
{
  string color = "\x1b[" + to_string(32) + ";"+to_string(99)+"m";
string reset = "\x1b[0m";
  cout << color << "\nDescending order: " << reset << endl;
  //print the array.
  for(int i = 0; i < size; i++)
  {
    cout << array[i] << endl;
  }
}

//function definition
void sortArrDesc(double array[], int size)
{string color = "\x1b[" + to_string(32) + ";"+to_string(32)+"m";
string reset = "\x1b[0m";
  cout << color << "\nPrinted Descending Sorted Numbers: " << reset << endl;
  double temp = 0; //needed for swap process
  for(int left = 0; left < size; left++)
  {

    for(int right = left + 1; right < size; right++)
    {
      //the swap magic happens here :)
      //Bubble sort: compare the left num to the right num
      //swap if neccessary.
      if(array[left] < array[right]) //hint > is ASC, and < is DESC
      {
        temp = array[left];
        array[left] = array[right];
        array[right] = temp;
      }

    }
  }
  //Print the array after sorting the array.
  printArray(array, size);
}

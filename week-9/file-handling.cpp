#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
  string filename = "example.txt";

  ofstream outputFile(filename);

  if (outputFile.is_open())
  {
    outputFile << "Hello, this is a line written to the file." << endl;
    outputFile << "This is a second line with a number: " << 123 << endl;
    outputFile.close();
    cout << "Successfully wrote to " << filename << endl;
  }
  else
  {
    cerr << "Error: Unable to open file for writing: " << filename << endl;
    return 1;
  }

  ifstream inputFile(filename);

  string firstWord, restOfFirstLine;
  string secondLine;

  if (inputFile.is_open())
  {
    inputFile >> firstWord;

    inputFile.ignore();
    getline(inputFile, restOfFirstLine);

    getline(inputFile, secondLine);

    cout << "\nReading from " << filename << ":" << endl;
    cout << "First word: " << firstWord << endl;
    cout << "Rest of first line: " << restOfFirstLine << endl;
    cout << "Second line: " << secondLine << endl;

    inputFile.close();
  }
  else
  {
    cerr << "Error: Unable to open file for reading: " << filename << endl;
    return 1;
  }

  return 0;
}

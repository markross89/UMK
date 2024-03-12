#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  string number = "12";
  int num = stoi(number);

  cout << hex << num << endl;

    return 0;
}

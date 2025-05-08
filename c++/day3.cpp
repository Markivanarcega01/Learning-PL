#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    // Sample comment
    string textWithWhiteSpace = "        This is a sample text        ";
    textWithWhiteSpace.erase(remove(textWithWhiteSpace.begin(), 
    textWithWhiteSpace.end(), ' '), 
    textWithWhiteSpace.end());
    cout << textWithWhiteSpace;
    return 0;
}
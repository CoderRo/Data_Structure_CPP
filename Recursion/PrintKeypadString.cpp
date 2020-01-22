#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
 unordered_map<int , string> Keypad({{0,""},{1,""},{2,"abc"},{3, "def"},{4, "ghi"},{5, "jkl"},
                        {6,"mno"},{7, "pqrs"},{8, "tuv"},{9, "wxyz"}});

void printKeypadrecursion(int input , string output) {
    if ( input == 0) {
        cout<<output<<endl;
    }
    int n = input % 10;
    string keypadStr = Keypad[n];
    for ( int i = 0 ; i < keypadStr.length(); i++ ) {
        printKeypadrecursion(input/10, keypadStr[i] + output);
    }


}
void printKeypad(int num){
    string output = "";
    printKeypadrecursion(num, output);
}

int main()
{
    int num;
    cin>>num;
    printKeypad(num);

    return 0;
}

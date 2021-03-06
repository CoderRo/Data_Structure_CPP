#include <iostream>
#include <string>
using namespace std;
int SubsequenceStr( string input , string*  output) {
    if ( input.empty() ) {
        output[0] = "";
        return 1;
    }
    string substring = input.substr(1);
    int size = SubsequenceStr(substring , output);
    for ( int i = 0 ; i < size ; i++ ) {
        output[size + i] = output[i] + input[0];
        size++;
    }
    return size;
}
int main()
{
    string input;
    cin >> input;
    string* output =  new string[1000];
    int SizeSubsequence = SubsequenceStr (input,output);
    for ( int i = 0 ; i < SizeSubsequence ; i++ ) {
        cout << output[i] << endl;
    }
   return 0;
}

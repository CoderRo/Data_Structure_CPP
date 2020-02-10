#include <iostream>
#include <cstring>

using namespace std;
void printInterleaving(char first[], char second[], string outstr) {
     // Basecase
     // When both char array are empty print the outstr
    if ( strlen(first) == 0 && strlen(second) == 0 ){
        cout<<outstr<<endl;
    }

    if ( strlen(first) != 0) {
        printInterleaving(first+1,second,outstr + first[0]);
    }

    if ( strlen(second) != 0) {
        printInterleaving(first,second+1,outstr + second[0]);
    }
}
void interleaving(char first[], char second[]) {
    string outstr;
    printInterleaving(first, second, outstr);
}
int main()
{
    char str1[100],str2[100];
    cin>>str1>>str2;
    interleaving(str1,str2);
    return 0;
}

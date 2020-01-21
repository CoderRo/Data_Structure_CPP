#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;
unordered_map < int , string > umap({
    {0,""},{1,""},{2,"abc"},{3,"def"},{4,"ghi"},{5,"jkl"},{6,"mno"},{7,"pqrs"},{8,"tuv"},{9,"wxyz"}
});
int keypad( int num,string *output ) {
    if ( num == 0 ) {
        output[0] = "";
        return 1;
    }
    int digit = num % 10;
    int size = keypad(num / 10,output);
    string str =  umap[digit];
    int strlength = str.length();
    int i =0 ,j = 0;
    for (  i = 1 ; i < strlength ; i++) {
        for (  j = 0 ; j < size ; j++ ) {
            output[size*i + j ] = output[j];
        }
    }
    for ( int i = 0 ; i < strlength ; i++) {
        for ( int j = 0 ; j < size ; j++ ) {
            output[size*i + j ] = output[size*i + j ] + str[i];
        }
    }
    return size * i;
}
int main()
{
    int num;
    cin >> num;
    string *output = new string[1000];
    int size = keypad(num,output);
    for ( int i = 0; i < size ;i++) {
        cout<<output[i]<<endl;
    }
}

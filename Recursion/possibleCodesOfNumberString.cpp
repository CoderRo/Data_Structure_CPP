
#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;


int minmumCount(string num,string output[10000]) {
    if (num[0] == '\0') {
        output[0] = "";
        return 1;
    }
    char c = num[0];
    int first = c - '0';
    char firstchar = 'a' + first - 1;
    char secondchar;
    string output1[500];
    string output2[500];
    int size1 = minmumCount(num.substr(1), output1);
    int size2 = 0;
    if( num[1] != '\0') {
        int second = first*10 + num[1] - '0';
        if ( second >= 10 && second <= 26 ) {
             secondchar = second + 'a' - 1;
            size2 = minmumCount(num.substr(2), output2);
        }
    }
    int k = 0;
    for ( int i = 0; i < size1 ; i++ ) {
        output[k++] = firstchar + output1[i];
    }
    for ( int i = 0; i < size2 ; i++ ) {
        output[k++] = secondchar + output2[i];
    }
    return k;
}
int main(){
  string num;
   string output[10000];
   cin>>num;
   int count = minmumCount(num,output);
   for ( int i = 0 ; i < count ; i++ ) {
       cout<<output[i]<<endl;
   }
}

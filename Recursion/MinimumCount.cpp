
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int minmumCount(int num) {

     if( sqrt(num) - floor(sqrt(num)) == 0) {
        return 1;
    }

    if( num <= 3) {
        return num;
    }



    int res = num;
    for( int i = 1 ; i < num ; i++ ) {
        int temp = i * i;
        if (num < temp ) {
            break;
        } else {
            res = min(res,1 + minmumCount(num - temp));
        }
    }
        return res;
}
int main()
{
   int num;
   cin>>num;
   cout<<minmumCount(num);
}

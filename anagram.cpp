#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    string  str = "12345";
    int series[] = {1,3,2,-1,-3,-2};
    int j=0;

    for(int i=str.size()-1;i>=0;i--){
        int digit = str[i]-'0' ;
        cout << digit << " ";
    }cout << endl;

    for(int i=str.size()-1,j=0;i>=0;i--,j++){
        cout << str[i]*series[j];
    }
    return 0;
}

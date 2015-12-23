#include <iostream>
#include <bits/stdc++.h>
using namespace std;

unsigned char to_hex(unsigned char x){
    if(x<10)
        return x+'0';
    else
        return x-10+'A';
}

int main(){
    freopen("lookupTables.txt", "w", stdout);
    unsigned char divResult,reminder;
    for(int i=0;i<256;i++){
        if(i%16 == 0)
            cout<<endl;
        divResult = i>>4;
        reminder = i&15;
        cout<<"0X"<<to_hex(divResult)<<to_hex(reminder)<<',';
    }
    cout<<endl;

    return 0;
}

//
//  main.cpp
//  pat1006
//
//  Created by 董依萌 on 2017/5/26.
//  Copyright © 2017年 董依萌. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int x,y[3];
    cin>>x;
        y[0]=x%10;
        x/=10;
    y[1]=x%10;
    x/=10;
    y[2]=x%10;
    for(int i=2;i>=0;i--){
        for(int j=0;j<y[i];j++){
            if(i==2)
                cout<<"B";
            else if(i==1)
                cout<<"S";
            else
                cout<<j+1;
        }
    }
    return 0;
}

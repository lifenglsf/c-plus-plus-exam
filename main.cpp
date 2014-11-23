//
//  Created by 李峰 on 14/11/23.
//  Copyright (c) 2014年 李峰. All rights reserved.
//

#include <iostream>
void FConvertC(float t);
void oddSum();
int max(int x,int y);
int main() {
    FConvertC(82.3);
    oddSum();
    int x,y,z;
    std::cin>>x>>y;
    z = max(x,y);
    std::cout<<x<<"和"<<y<<"的最大值为"<<z;
    return 0;
}

void FConvertC(float t){
    float c;
    c = 5.0/9.0*(t-32);
    std::cout << t<<"的摄氏温度为"<<c<<std::endl;
}

void oddSum(){
    int sum=0;
    for(int i=1;i<=100;i++){
        if(i%2 == 1){
            sum+=i;
        }
    }
    std::cout<<"1-100奇数和为:"<<sum<<std::endl;
}

int max(int x,int y){
    if(x > y){
        return x;
    }
    return y;
}



/**
 *程序运行结果
 *82.3的摄氏温度为27.9444
 *1-100奇数和为:2500
 *输入:14
 *输入:8
 *14和8的最大值为14
 *
 *
 */


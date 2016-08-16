//
//  main.cpp
//  c++
//
//  Created by 何舒展 on 16/8/6.
//  Copyright © 2016年 何舒展. All rights reserved.
//

#include <iostream>   //包含头文件iOSstream
using namespace std;//使用明明空间std

int max(int x, int y)
{
    int z;
    if(x>y)
    {
        z=x;
    }
    else
    {
      z=y;
    }
    return(z);
}


int main(int argc, const char * argv[])
 {
//
//    cout<<"this is c++ progrom\n";
//     return 0;
  

     
     //求两行数之和
//     int a,b,sum;
//     cin>>a>>b;//输入语句
//     sum = a+b;
//     cout<<"a+b="<<sum<<endl;
//
     
//
        int a,b,m;
         cin>>a>>b;//输入语句
        m = max(a,b);
     cout<<"max is "<<m<<"\n";
     
     
     
         return 0;
     

  
     
}

#include <stdio.h>
//c语言函数的返回值 类型比较单一. 
//一般无法让一个函数返回多个数据. 
//利用指针 让一个子函数 返回了一个以上的值.

//如果想让子函数 更改主函数里面变量的值,(把主函数里面的变量传递给子函数)
//1. 把主函数里面要处理的数据的地址获取出来.
//2. 把地址传递给子函数
//3.子函数 采用*地址 修改主函数里面变量的值. 

void f(int* x, int* y){
    
    *x +=2;
    *y +=2;
    
    
}



 main()
{ 
       int i=3;
       int j=5; 
       f(&i,&j);
       printf("i=%d\n",i);
       printf("j=%d\n",j);
       
       system("pause"); 
}

#include<stdio.h>
void fun(void){
    printf("Hello fun\n");
}
void fun2();                        //通知编译器，要用到这个函数
int main(void){
    printf("Hello , C Primer .\n");
    fun();
    fun2();                         //调用
    printf("Hello , C Primer .\n");
    return 0;
}
void fun2(){                        //定义函数
    printf("Hello fun2 \n");
}
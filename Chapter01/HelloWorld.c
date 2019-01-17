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

    //8进制、10进制、16进制
    printf("========================\n");
    int x=100;
    printf("%d \n",x);
    printf("%x \n",x);
    printf("%o \n",x);
    printf("%#x \n",x);
    printf("%#o \n",x);


    return 0;
}
void fun2(){                        //定义函数
    printf("Hello fun2 \n");
}
#include<stdio.h>
#include<stdlib.h>

//交换函数
int Swap(char* start, char* end){
    char temp;
    if (start == end){  //若字符串为空
        printf("字符串为空.\n");  //输出提示信息
        return 0;
    }
    --end;  //使end指向字符串最后一个有效字符
    while (start < end){  //当start小于end
        //交换start和end指向的内容
        temp = *start;
        *start = *end;
        *end = temp;
        ++start;  //start向后移
        --end;  //end向前移
    }
    return 1;
}

//用户输入数据函数
int input_breakpoint(int len){
    int breakpoint;
    printf("请输入您想左旋字符个数(0-%d):\n", len - 1);  //提示用户输入信息
    while (1){  //当条件为真
        scanf("%d", &breakpoint);  
        if (breakpoint >= 0 && breakpoint < len){  //判断断点是否合格
            break;  //断点合格跳出循环
        }
        printf("输入有误,请重新输入(0-%d):\n", len - 1);  //提示用户重新输入信息
    }
    return breakpoint;  //返回断点
}

//实现函数
void Function(char str[],int len){
    char* start = str;  //start指向字符串开头
    char* end = str + len - 1;  //end指向'\0'
    Swap(start, end);
    int breakpoint = input_breakpoint(len);
    end = end - breakpoint;  //end向左移end减breakpoint位(即将breakpoint个字符左旋)
    Swap(start, end);
    start = end;  //start指向end
    while (*end != '\0'){  //当end指向不为空
        ++end;  //end向后移
    }
    Swap(start, end);
    printf("%s", str);
    
}

//主函数
int main(){
    char str[] = "ABCD";  //定义字符串,并初始化
    int len = sizeof(str);
    Function(str,len);  //调用实现函数
    system("pause");
    return 0;
}
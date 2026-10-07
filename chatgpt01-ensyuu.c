//age が 18以上なら「大人」、18未満なら「子ども」と表示するプログラムを書いて
#include <stdio.h>

int main(void)
{
    int age = 16; //int age = 16;
    printf("%s\n", (age % 18 <= 0) ? "大人" : "子ども"); //printf("%s\n", (age >= 18) ? "大人" : "子ども"); ←正しい書き方
    return 0;
}


#include "../exercise.h"

// READ: `static` 关键字 <https://zh.cppreference.com/w/cpp/language/storage_duration>
// THINK: 这个函数的两个 `static` 各自的作用是什么？
static int func(int param) {
    static int static_ = param;  //静态局部变量，只在函数第一次被调用时执行，之后调用直接跳过初始化语句，不再重新赋值  
    // std::cout << "static_ = " << static_ << std::endl;
    return static_++; //先返回当前值，再执行＋1操作    
}

int main(int argc, char **argv) {
    // TODO: 将下列 `?` 替换为正确的数字 
    ASSERT(func(5) == 5, "static variable value incorrect");
    ASSERT(func(4) == 6, "static variable value incorrect");
    ASSERT(func(3) == 7, "static variable value incorrect");
    ASSERT(func(2) == 8, "static variable value incorrect");
    ASSERT(func(1) == 9, "static variable value incorrect");
    return 0;
}

## 学习笔记

> **2.1**

**函数要定义在main函数之前，编译过程从上到下**

**main函数**
```C
<optional return value type> main(optional argument) {
    <optional procedure statements or function calls>;
}
```

```C
<可选返回值类型> main(可选参数) {
    <可选的函数语句或过程调用>;
}
```

**如果未指定返回值类型，则返回默认int类型**


```C
/* 命令行参数：整型argc保存参数个数，argv数组保存形参(字符串)，程序名存储在argv[0] */
<optional return value type> main(int argc, char * argv[]) {
}
```
[参照](https://blog.csdn.net/weixin_40539125/article/details/82585792)

> **sizeof**

**sizeof函数可用于获取编译器分配的内存长度**

> **scanf**

**scanf，&符用于将键盘接收到的值存入某某所指代的内存地址**

**scanf没有对字符串长度进行边界检查，会导致一些问题**

> strcpy/strncpy

**内存地址覆盖：如果源字符串长度超过目标字符串分配的空间，造成缓冲区溢出**
`strcpy(<destination>, <source>);`

`strcpy(<目标>, <源>);`

`strncpy(<destination>, <source>, <width>);`

**width控制复制的宽度**
`strncpy(<目标>, <源>, <宽度>);`

**snprintf函数可以控制长度并处理错误**

> 编译C语言

**gcc编译**

`gcc -o 编译生成的文件 源文件`

`gcc 源文件 -o 编译生成的文件`

`./编译生成的文件`

*demo:*

`gcc -o hello 01.c`

`./hello`

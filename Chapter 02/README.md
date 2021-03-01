# README

## 2.1 基本内置类型

### 2.1.1 算术类型

#### 内置类型的机器实现

可寻址的最小内存块称为“**字节**”(byte)；存储的基本单元称为“**字**”(word)，他通常由几个字节组成。大多数机器中字节由8比特构成，字则由4或8字节构成。C++中`char`的大小和一个机器字节一样。

#### `double`和`float`的选择

执行浮点数运算优先选`double`，这因为`float`通常京都不够，而且双精度浮点数和单精度浮点数的计算代价相差不大，甚至有些机器会针对`double`进行优化使得其比`float`运行更快。

### 2.1.2 类型转换

当赋值给无符号类型一个超过他表示范围的值时，结果是初始值对无符号类型表示数值总数取模后的余数。

当赋给带符号类型一个超出他表示范围的值时，结果是undefined。

## 2.2 变量

### 声明和定义

声明是让程序知道名字，定义负责创建和名字关联的实体。变量可以多次声明，但是只能定义一次。

而当只想声明但是不准备定义的时候需要使用extern关键字。

声明和定义的区别看起来也许微不足道，但实际上却非常重要。如果要**在多个文件中使用同一个变量**，就必须将声明和定义分离。此时，变量的定义必须出现在且只能出现在一个文件中，而其他用到该变量的文件必须对其进行声明，却绝对不能重复定义。

## 2.3 复合类型

### 2.3.1 引用

引用（reference）为对象起了另外一个名字，引用类型引用（refers to）另外一种类型。

引用并非对象，相反的，它只是为一个已经存在的对象所起的另外一个名字。

### 2.3.2 指针

**指针**（pointer）是“指向（point to）”另外一种类型的*复合类型*。

指针存放某个对象的地址，要想获取该地址，需要使用**取地址符**（&）。

如果指针指向了一个对象，则允许使用**解引用符**（＊）来访问该对象。

得到**空指针**最直接的办法就是用字面值nullptr来初始化指针。

因为使用未初始化的指针是运行错误的一个经常犯的错误，所以作者建议在命名时便对指针进行初始化。

void＊是一种特殊的指针类型，可用于存放任意对象的地址，但是不能直接操作void＊指针所指的对象。

在下面代码中常常会误以为p1、p2均为指针，但是实际上基本数据类型是int而非int＊。＊仅仅是修饰了p1而已，对该声明语句中的其他变量，它并不产生任何作用。

```C++
int* p1,p2 //p1为指针但是p2是int类型数据
```

面对一条比较复杂的指针或引用的声明语句时，从右向左阅读有助于弄清楚它的真实含义。

## 2.4 const限定符

为了防止程序一不小心改变了某些变量，引入了关键字const对变量的类型加以限定。

默认情况下，**const对象被设定为仅在文件内有效**。当多个文件中出现了同名的const变量时，其实等同于在不同文件中分别定义了独立的变量。

某些时候有这样一种const变量，它的初始值不是一个常量表达式（值不会改变且在编译过程中就能够得到计算结果的表达式），但又确实有必要在文件间共享。

这种情况下，我们不希望编译器为每个文件分别生成独立的变量。相反，我们想让这类const对象像其他（非常量）对象一样工作，也就是说，只在一个文件中定义const，而在其他多个文件中声明并使用它。

解决的办法是，对于const变量不管是声明还是定义都添加extern关键字，这样只需定义一次就可以了：

```C++
// file_1.cc 定义并初始化了一个常量
extern const int bufSize = fcn();
// file_1.h 头文件
extern const int bufSize;
```

如果想在多个文件之间共享const对象，必须在变量的定义之前添加extern关键字。

关于extern自己还是有些模糊，虽然之前2.2中有讲到，然后自己在[When to use extern in C++](https://stackoverflow.com/questions/10422034/when-to-use-extern-in-c?newreg=81ee892865164caea4c0032731c4da7c)看到的回答感觉很有道理，摘录下来：
>This comes in useful **when you have global variables**. You declare the existence of global variables in a header, so that each source file that includes the header knows about it, but you only need to “define” it once in one of your source files.
>
>To clarify, using extern int x; tells the compiler that an object of type int called x exists somewhere. It's not the compilers job to know where it exists, it just needs to know the type and name so it knows how to use it. Once all of the source files have been compiled, the linker will resolve all of the references of x to the one definition that it finds in one of the compiled source files. For it to work, the definition of the x variable needs to have what's called “external linkage”, which basically means that it needs to be declared outside of a function (at what's usually called “the file scope”) and without the static keyword.
>
>**header**:
>
>```C++
>#ifndef HEADER_H
>#define HEADER_H
>
>// any source file that includes this will be able to use "global_x"
>extern int global_x;
>
>void print_global_x();
>
>#endif
>```
>
>**source 1**:
>
>```C++
>#include "header.h"
>
>// since global_x still needs to be defined somewhere,
>// we define it (for example) in this source file
>int global_x;
>
>int main()
>{
>    //set global_x here:
>    global_x = 5;
>
>    print_global_x();
>}
>```
>
>**source 2**:
>
>```C++
>#include <iostream>
>#include "header.h"
>
>void print_global_x()
>{
>    //print global_x here:
>    std::cout << global_x << std::endl;
>}
>```

### 初始化常量引用

初始化常量引用比较特殊，可以用任意表达式作为初始值，只要该表达式的结果能转换成引用的类型即可，这和非常量引用初始化时不同。

```C++
const int &r2 = 3;
const int &r3 = r2 * 2;
```

**常量引用**绑定（非常量）整数是合法的，但是不能通过常量引用来修改值，**指向常量的指针**也是一样的。

```C++
double dval = 3.14;
const double *cptr = &deval; 
//不可以通过cptr对deval值进行更改
```

注意区分指向常量的指针和常量指针。常量指针的值（也就是存放在指针中的那个地址）在初始化之后就不能再改变了：

```C++
int errNumb = 0;
int *const currErr = &errNumb;
```

指针本身是不是常量以及指针所指的是不是一个常量就是两个相互独立的问题。用名词**顶层const**（top-level const）表示指针本身是个常量，而用名词**底层const**（low-level const）表示指针所指的对象是一个常量。

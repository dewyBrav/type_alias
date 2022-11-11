//learn a type alias // псевдонимы типов
#include <iostream>

//Чтобы гарантировать, что каждый псевдоним типа преобразуется в тип нужного размера, 
//псевдонимы типа такого рода обычно используются в сочетании с директивами препроцессора:
#ifdef INT_2_BYTES
using int8_t = char;    //1б
using int16_t = int;    //2б
using int32_t = long;   //4б
#else
//using int8_t = char;  //1б 
using int16_t = short;  //2б
using int32_t = int;    //4б
#endif


int main()
{

    std::cout<<"int8_t is "<<sizeof(int8_t)<<"\tint16_t is "<<sizeof(int16_t)<<"\tint32_t is "<<sizeof(int32_t)<<std::endl;
    return 0;
}
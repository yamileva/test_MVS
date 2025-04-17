// LR3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Balance.h"
#include "Segment.h"


int main()
{
  Segment s1;
  s1.set_begin({ 4, 7 });
  s1.set_end({ 6, 0 });
  s1.get_begin().set_x(8);
  std::cout << s1.get_begin().get_x() << " " << s1.get_begin().get_y() << ", "
    << s1.get_end().get_x() << " " << s1.get_end().get_y() << std::endl;
  //comment 
}

// LR3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

class Balance {
public:
  // Balance() : left_(0), right_(0) {};
  Balance() = default;

  void add_left(int value) { left_ += value; }

  void add_right_(int value) { right_ += value; }

  void reset() { left_ = 0; right_ = 0; }

  int result() {
    if (left_ > right_) {
      return -1;
    }
    if (left_ < right_) {
      return 1;
    }
    return 0;
  }

private:
  int left_ = 0;
  int right_ = 0;
};

struct Point {
public:
  Point() = default;
  
  Point (double x, double y) : x_(x), y_(y) {}

  ~Point() {
    std::cout << "object Point " << x_ << " " << y_ << " has been destroyed \n";
  };

  void set_x(double v) {
    x_ = v;
  }

  void set_y(double v) {
    y_ = v;
  }

  double get_x() {
    return x_;
  }

  double get_y() {
    return y_;
  }

private:
  double x_ = 0;
  double y_ = 0;
};

class Segment {
public:
  Segment() = default;
  ~Segment() {
    std::cout << "object Segment has been destroyed \n";
  };

  void set_begin(const Point& p) {
    begin_ = p;
  }

  void set_end(const Point& p) {
    end_ = p;
  }

  Point& get_begin() {
    return begin_;
  }

  Point& get_end() {
    return end_;
  }

private:
  Point begin_, end_;
};

int main()
{
  Segment s1;
  s1.set_begin({ 4, 7 });
  s1.set_end({ 6, 0 });
  s1.get_begin().set_x(8);
  std::cout << s1.get_begin().get_x() << " " << s1.get_begin().get_y() << ", "
    << s1.get_end().get_x() << " " << s1.get_end().get_y() << std::endl;
}

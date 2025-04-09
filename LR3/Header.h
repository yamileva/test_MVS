#pragma once
#include <iostream>

struct Point {
public:
  Point() = default;

  Point(double x, double y) : x_(x), y_(y) {}

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

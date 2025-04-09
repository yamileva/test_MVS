#pragma once
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

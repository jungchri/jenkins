#include<iostream>

class Ball {
  std::string color_{"black"};
  double radius_{};

public:
  Ball(double radius)
    : radius_ {radius}
  {
  };
  Ball(const std::string &color="black", double radius=10.0)
    : color_{color}
    , radius_{radius}
  {
  }
  void print();
};



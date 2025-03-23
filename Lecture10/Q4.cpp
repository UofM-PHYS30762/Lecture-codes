// L10/Q4.cpp
// Niels Walet. Last edited 03/12/2019
#include<iostream>
#include<memory>
struct C {int* data;};
int main () {
  std::shared_ptr<int> sp1 (std::make_shared<int>(42));
  std::shared_ptr<int> sp2 (sp1);

  std::weak_ptr<int> wp1;
  std::weak_ptr<int> wp2 (wp1);
  std::weak_ptr<int> wp3 (sp1);
  std::weak_ptr<int> wp4 (sp2);

  std::cout << wp1.use_count() ;
  std::cout << " " << wp2.use_count() ;
  std::cout << " " << wp3.use_count() ;
  std::cout << " " << wp4.use_count() << '\n';
  return 0;
}

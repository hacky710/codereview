#ifndef PRJECT2_SHOPPING_H_
#define PRJECT2_SHOPPING_H_

#include "goods.h"

#include <vector>

// Shopping class presents List of shopping.
// Example:
//     Shopping tobuylist;
//     Goods obj1;
//     Goods obj2;
//     ...
//     tobuylist.PushList(obj1);
//     tobuylist.PushList(obj2);
//     tobuylist.PrintList();
class Shopping{
 public:
  void PushList(Goods object);
  Goods GetLastElement();
  void PrintList();
  void SortByPrice();
  void SortByIndex();

 private:
  std::vector<Goods> shopping_list_;
};

#endif  // PRJECT2_SHOPPING_H_

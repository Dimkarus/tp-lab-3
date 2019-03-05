//
// Created by dlots on 14.02.19.
//

#include "DateTime.h"

int main() {
  cout << "build ok \n";
  DateTime container;
  //container.testfun();
  cout <<container.getToday()<< "\n";
  cout <<container.getYesterday()<< "\n";
  cout <<container.getTomorrow()<< "\n";
  cout <<container.getFuture(60)<< "\n";
  cout <<container.getPast(5)<< "\n";
  DateTime foo(3, 3, 2019);
  cout << "diff is " << container.getDifference(foo) << " days\n";
  cout << "build ok \n";
}

#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <unordered_map>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol1209;

/*
Input: s = "leEeetcode"
Output: "leetcode"
Explanation: In the first step, either you choose i = 1 or i = 2,
both will result "leEeetcode" to be reduced to "leetcode".
*/

tuple<string, string>
testFixture1()
{
  return make_tuple("leEeetcode", "leetcode");
}

/*
Input: s = "abBAcC"
Output: ""
Explanation: We have many possible scenarios, and all lead to the same answer. For example:
"abBAcC" --> "aAcC" --> "cC" --> ""
"abBAcC" --> "abBA" --> "aA" --> ""
*/

tuple<string, string>
testFixture2()
{
  return make_tuple("abBAcC", "");
}

/*
Input: s = "s"
Output: "s"
*/
tuple<string, string>
testFixture3()
{
  return make_tuple("s", "s");
}

void test1()
{
  auto f = testFixture1();
  cout << "Expect to see: " << get<1>(f) << endl;
  Solution sol;
  cout << sol.makeGood(get<0>(f)) << endl;
}

void test2()
{
  auto f = testFixture2();
  cout << "Expect to see: " << get<1>(f) << endl;
  Solution sol;
  cout << sol.makeGood(get<0>(f)) << endl;
}

void test3()
{
  auto f = testFixture3();
  cout << "Expect to see: " << get<1>(f) << endl;
  Solution sol;
  cout << sol.makeGood(get<0>(f)) << endl;
}

main()
{
  test1();
  test2();
  test3();
  return 0;
}
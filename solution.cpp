#include "solution.h"
#include "util.h"
#include <unordered_set>
#include <numeric>
#include <iterator>
#include <unordered_map>
#include <deque>
#include <string>
#include <sstream>
#include <algorithm>
#include <stack>
#include <functional>
using namespace sol1209;
using namespace std;

/*takeaways
  - use stack
*/

string Solution::makeGood(string s)
{
  string st;

  for (auto c : s)
  {
    /* one is the lower case the other uppercase between c and st.back() */
    if (!st.empty() && c != st.back() && tolower(c) == tolower(st.back()))
      st.pop_back();
    else
      st.push_back(c);
  }

  return st;
}

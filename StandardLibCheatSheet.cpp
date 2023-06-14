/*
This a header file that includes every standard library. 
You can use it to save time.

NOTE: This header file may only be recognized by the GCC compiler.

*/
#include <bits/stdc++.h>

/*
//Use this if the above header file doesn't work.

#include <iostream>

#include <algorithm>
#include <list>
#include <map>
#include <priority_queue>
#include <stack>
#include <string>
#include <vector>
*/

// <iostream> - Input/output operations
#include <iostream>
using namespace std;

int main() {
  // Input/output
  int num;
  cin >> num;
  cout << "Number: " << num << endl;
  
  // Standard streams
  cerr << "Error message" << endl;
  clog << "Logging message" << endl;
  
  // Others
  printf("Number: %d\n", num);
  
  return 0;
}


// <vector> - Dynamic arrays
#include <vector>
using namespace std;

int main() {
  // Declaration and initialization
  vector<int> vec;
  vector<int> vec2(5);
  vector<int> vec3 = {1, 2, 3, 4, 5};
  
  // Accessing elements
  cout << "Element at index 2: " << vec3[2] << endl;
  cout << "First element: " << vec3.front() << endl;
  cout << "Last element: " << vec3.back() << endl;
  
  // Modifying elements
  vec.push_back(10);
  vec.pop_back();
  vec[0] = 20;
  
  // Size and capacity
  cout << "Size of vector: " << vec.size() << endl;
  cout << "Capacity of vector: " << vec.capacity() << endl;
  
  return 0;
}


// <string> - String manipulation
#include <string>
using namespace std;

int main() {
  // Declaration and initialization
  string str;
  string str2 = "Hello";
  string str3(5, 'a');
  
  // Concatenation
  string combined = str2 + " " + str3;
  
  // Accessing characters
  cout << "Character at index 1: " << combined[1] << endl;
  cout << "First character: " << combined.front() << endl;
  cout << "Last character: " << combined.back() << endl;
  
  // Modifying characters
  str.push_back('H');
  str.pop_back();
  str[0] = 'W';
  
  // Size and length
  cout << "Size of string: " << str.size() << endl;
  cout << "Length of string: " << str.length() << endl;
  
  // Substring
  cout << "Substring: " << combined.substr(1, 4) << endl;
  
  // String comparison
  if (str == str2) {
    cout << "Strings are equal" << endl;
  } else {
    cout << "Strings are not equal" << endl;
  }
  
  return 0;
}


// <algorithm> - Algorithms on sequences
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  // Sorting
  vector<int> vec = {5, 2, 7, 3, 1};
  sort(vec.begin(), vec.end());
  
  // Binary search
  int key = 3;
  if (binary_search(vec.begin(), vec.end(), key)) {
    cout << "Key found" << endl;
  } else {
    cout << "Key not found" << endl;
  }
  
  // Maximum and minimum
  int maxVal = *max_element(vec.begin(), vec.end());
  int minVal = *min_element(vec.begin(), vec.end());
  
  // Reverse
  reverse(vec.begin(), vec.end());
  
  return 0;
}


// <queue> - Queue
#include <queue>
using namespace std;

int main() {
  // Declaration and initialization
  queue<int> q;
  
  // Insertion and removal
  q.push(10);
  q.push(20);
  q.pop();
  
  // Accessing elements
  cout << "Front element: " << q.front() << endl;
  cout << "Size of queue: " << q.size() << endl;
  
  // Checking if empty
  if (q.empty()) {
    cout << "Queue is empty" << endl;
  } else {
    cout << "Queue is not empty" << endl;
  }
  
  return 0;
}


// <stack> - Stack
#include <stack>
using namespace std;

int main() {
  // Declaration and initialization
  stack<int> s;
  
  // Insertion and removal
  s.push(10);
  s.push(20);
  s.pop();
  
  // Accessing elements
  cout << "Top element: " << s.top() << endl;
  cout << "Size of stack: " << s.size() << endl;
  
  // Checking if empty
  if (s.empty()) {
    cout << "Stack is empty" << endl;
  } else {
    cout << "Stack is not empty" << endl;
  }
  
  return 0;
}


// <deque> - Double-ended queue
#include <deque>
using namespace std;

int main() {
  // Declaration and initialization
  deque<int> dq;
  
  // Insertion at front and back
  dq.push_front(10);
  dq.push_back(20);
  
  // Accessing elements
  cout << "Front element: " << dq.front() << endl;
  cout << "Back element: " << dq.back() << endl;
  
  // Size
  cout << "Size of deque: " << dq.size() << endl;
  
  // Erase elements
  dq.pop_front();
  dq.pop_back();
  
  return 0;
}


// <list> - Doubly-linked list
#include <list>
using namespace std;

int main() {
  // Declaration and initialization
  list<int> lst;
  
  // Insertion at front and back
  lst.push_front(10);
  lst.push_back(20);
  
  // Accessing elements
  cout << "Front element: " << lst.front() << endl;
  cout << "Back element: " << lst.back() << endl;
  
  // Size
  cout << "Size of list: " << lst.size() << endl;
  
  // Erase elements
  lst.pop_front();
  lst.pop_back();
  
  return 0;
}


// <set> - Set
#include <set>
using namespace std;

int main() {
  // Declaration and initialization
  set<int> s;
  
  // Insertion
  s.insert(10);
  s.insert(20);
  
  // Accessing elements
  cout << "Size of set: " << s.size() << endl;
  
  // Erase elements
  s.erase(20);
  
  // Searching
  if (s.find(10) != s.end()) {
    cout << "Element found" << endl;
  } else {
    cout << "Element not found" << endl;
  }
  
  return 0;
}


// <map> - Map
#include <map>
using namespace std;

int main() {
  // Declaration and initialization
  map<string, int> m;
  
  // Insertion
  m["Alice"] = 25;
  m["Bob"] = 30;
  
  // Accessing elements
  cout << "Age of Alice: " << m["Alice"] << endl;
  
  // Size
  cout << "Size of map: " << m.size() << endl;
  
  // Erase elements
  m.erase("Bob");
  
  // Searching
  if (m.find("Alice") != m.end()) {
    cout << "Element found" << endl;
  } else {
    cout << "Element not found" << endl;
  }
  
  return 0;
}


// <unordered_set> - Unordered set
#include <unordered_set>
using namespace std;

int main() {
  // Declaration and initialization
  unordered_set<int> s;
  
  // Insertion
  s.insert(10);
  s.insert(20);
  
  // Accessing elements
  cout << "Size of unordered set: " << s.size() << endl;
  
  // Erase elements
  s.erase(20);
  
  // Searching
  if (s.find(10) != s.end()) {
    cout << "Element found" << endl;
  } else {
    cout << "Element not found" << endl;
  }
  
  return 0;
}


// <unordered_map> - Unordered map
#include <unordered_map>
using namespace std;

int main() {
  // Declaration and initialization
  unordered_map<string, int> m;
  
  // Insertion
  m["Alice"] = 25;
  m["Bob"] = 30;
  
  // Accessing elements
  cout << "Age of Alice: " << m["Alice"] << endl;
  
  // Size
  cout << "Size of unordered map: " << m.size() << endl;
  
  // Erase elements
  m.erase("Bob");
  
  // Searching
  if (m.find("Alice") != m.end()) {
    cout << "Element found" << endl;
  } else {
    cout << "Element not found" << endl;
  }
  
  return 0;
}


// <bitset> - Bitset
#include <bitset>
using namespace std;

int main() {
  // Declaration and initialization
  bitset<8> bits("10101010");
  
  // Accessing bits
  cout << "Bit at index 3: " << bits[3] << endl;
  cout << "Number of set bits: " << bits.count() << endl;
  
  // Setting and resetting bits
  bits.set(1);
  bits.reset(0);
  
  return 0;
}

// <cmath> - Math Library Cheatsheet

#include <iostream>
#include <cmath>
using namespace std;

int main() {
  // Trigonometric functions
  cout << "sin(0): " << sin(0) << endl;
  cout << "cos(0): " << cos(0) << endl;
  cout << "tan(0): " << tan(0) << endl;
  
  // Exponential and logarithmic functions
  cout << "exp(1): " << exp(1) << endl;
  cout << "log(2): " << log(2) << endl;
  cout << "log10(100): " << log10(100) << endl;
  
  // Power functions
  cout << "pow(2, 3): " << pow(2, 3) << endl;
  cout << "sqrt(16): " << sqrt(16) << endl;
  cout << "cbrt(27): " << cbrt(27) << endl;
  
  // Rounding and absolute functions
  cout << "ceil(2.3): " << ceil(2.3) << endl;
  cout << "floor(2.7): " << floor(2.7) << endl;
  cout << "round(2.5): " << round(2.5) << endl;
  cout << "abs(-10): " << abs(-10) << endl;
  
  // Minimum and maximum functions
  cout << "min(5, 8): " << min(5, 8) << endl;
  cout << "max(5, 8): " << max(5, 8) << endl;
  
  // Random number generation
  srand(time(NULL));  // Seed the random number generator
  
  cout << "Random number between 0 and 1: " << (double)rand() / RAND_MAX << endl;
  cout << "Random number between 1 and 10: " << (rand() % 10) + 1 << endl;
  
  return 0;
}

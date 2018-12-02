#include <vector>
#include <iostream>

using namespace std;

// with type name
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

// with macro
#define F first
#define S second
#define PB push_back
#define MP make_pair

// macro can also have parameter
#define REP(i, a, b) for (int i = a; i <= b; i++)

#define SQ(a) a*a
#define FIXED_SQ(a) (a)*(a)

int main() {
  // from
  long long a = 123456789l;
  // to
  ll b = 123456789l;

  cout << a << " equal " << b << endl;

  // from
  vector<pi> v; // vector< vector<int, int> >
  int y1 = 1;
  int x1 = 2;
  int y2 = 3;
  int x2 = 4;

  // that
  v.push_back(make_pair(y1, x1));
  v.push_back(make_pair(y2, x2));
  cout << v[0].first << endl;

  // equal
  v.PB(MP(y1, x1));
  cout << v[0].F << endl;
  v.PB(MP(y2, x2));

  // that
  for (int i = 0; i <= 5; i++) {
    cout << i << endl;
  }

  // equal that
  REP (i, 0, 5) {
    cout << i << endl;
  }

  cout << SQ(3+3) << endl; // this bug as it will do 3 + 3 * 3 + 3
  cout << FIXED_SQ(3+3) << endl;
}

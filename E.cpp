#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
typedef pair<int,int> pii;
typedef pair<LL,LL> pll;
typedef pair<string,string> pss;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
typedef vector<LL> vl;
typedef vector<vl> vvl;

double EPS = 1e-9;
int INF = 1000000005;
long long INFF = 1000000000000000005LL;
double PI = acos(-1);
int dirx[8] = {-1,0,0,1,-1,-1,1,1};
int diry[8] = {0,1,-1,0,-1,1,-1,1};

#ifdef TESTING
  #define DEBUG fprintf(stderr,"====TESTING====\n")
  #define VALUE(x) cerr << "The value of " << #x << " is " << x << endl
  #define debug(...) fprintf(stderr, __VA_ARGS__)
#else
  #define DEBUG 
  #define VALUE(x)
  #define debug(...)
#endif

#define FOR(a,b,c) for (int (a)=(b);(a)<(c);++(a))
#define FORN(a,b,c) for (int (a)=(b);(a)<=(c);++(a))
#define FORD(a,b,c) for (int (a)=(b);(a)>=(c);--(a))
#define FORSQ(a,b,c) for (int (a)=(b);(a)*(a)<=(c);++(a))
#define FORC(a,b,c) for (char (a)=(b);(a)<=(c);++(a))
#define FOREACH(a,b) for (auto &(a) : (b))
#define REP(i,n) FOR(i,0,n)
#define REPN(i,n) FORN(i,1,n)
#define MAX(a,b) a = max(a,b)
#define MIN(a,b) a = min(a,b)
#define SQR(x) ((LL)(x) * (x))
#define RESET(a,b) memset(a,b,sizeof(a))
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define ALL(v) v.begin(),v.end()
#define ALLA(arr,sz) arr,arr+sz
#define SIZE(v) (int)v.size()
#define SORT(v) sort(ALL(v))
#define REVERSE(v) reverse(ALL(v))
#define SORTA(arr,sz) sort(ALLA(arr,sz))
#define REVERSEA(arr,sz) reverse(ALLA(arr,sz))
#define PERMUTE next_permutation
#define TC(t) while(t--)

inline string IntToString(LL a){
  char x[100];
  sprintf(x,"%lld",a); string s = x;
  return s;
}

inline LL StringToInt(string a){
  char x[100]; LL res;
  strcpy(x,a.c_str()); sscanf(x,"%lld",&res);
  return res;
}

inline string GetString(void){
  char x[1000005];
  scanf("%s",x); string s = x;
  return s;
}

inline string uppercase(string s){
  int n = SIZE(s); 
  REP(i,n) if (s[i] >= 'a' && s[i] <= 'z') s[i] = s[i] - 'a' + 'A';
  return s;
}

inline string lowercase(string s){
  int n = SIZE(s); 
  REP(i,n) if (s[i] >= 'A' && s[i] <= 'Z') s[i] = s[i] - 'A' + 'a';
  return s;
}

inline void OPEN (string s) {
  #ifndef TESTING
  freopen ((s + ".in").c_str (), "r", stdin);
  freopen ((s + ".out").c_str (), "w", stdout);
  #endif
}

class Persegi {
    public:
        int x1;
        int x2;
        int y1;
        int y2;

    bool muat(Persegi x)
    {
        // cout << "=====================\n";
        // cout << "x1:" << x1 << "|" << x.x1 << '\n';
    	// cout << "x2:" << x2 << "|" << x.x2 << '\n';
    	// cout << "y1:" << y1 << "|" << x.y1 << '\n';
    	// cout << "y2:" << y2 << "|" << x.y2 << "\n";
        // cout << "=====================\n";
        if ((x1 <= x.x1 && x2 <= x.x2 && y1 <= x.y1 && y2 <= x.y2))
        {
            // printf("^ SUCCESS\n");
            return true;
        }

        if ((x1 <= x.x1 && x2 <= x.y2 && y1 <= x.y1 && y2 <= x.x2))
        {
            // printf("^ SUCCESS TRANSFORM\n");
            return true;
        }

        return false;
    }
};

// void compare(vector<Persegi> *p_v, int a, int b)
// {
//   if (p_v->at(a).muat(p_v->at(b)) || p_v->at(b).muat(p_v->at(a)))
//   {
//     ::noteq++;
//   }

//   if (abs(abs(a) - abs(b)) != 1)
//   {
//     compare(p_v, a + 1, b);
//     compare(p_v, a, b - 1);
//   }
// }

struct Compared
{
    int a;
    int b;
};

bool operator==(const Compared& a, const Compared& b)
{
    return a.a == b.a && a.b == b.b;
}

int main() {
  vector<Persegi> p_v;
  vector<Compared> cmp;
  int x1, y1, x2, y2;
  int N;
  int noteq = 0;

  cin >> N;

  FOR(i, 0, N)
  {
    cin >> x1 >> y1 >> x2 >> y2;

    Persegi p_temp;
    p_temp.x1 = 0;
    p_temp.y1 = 0;
    p_temp.x2 = (x2 - x1);
    p_temp.y2 = (y2 - y1);

    p_v.pb(p_temp);
  }
  
  FOR(i, 0, N)
  {
      FOR(j, 0, N)
      {
          if (i != j)
          {
              Compared cmp_t;
              if (i > j)
              {
                  cmp_t.a = j;
                  cmp_t.b = i;
              }
              else
              {
                  cmp_t.a = i;
                  cmp_t.b = j;
              }

              if (find(cmp.begin(), cmp.end(), cmp_t) != cmp.end())
              {
                  continue;
              }

              cmp.pb(cmp_t);
              
              if (!p_v[i].muat(p_v[j]))
              {
                  noteq += 1;
              }
          }
      }
  }

  cout << noteq << '\n';

  return 0;
}
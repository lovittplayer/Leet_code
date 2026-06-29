class Solution {
public:
    int reverse(int x) {
       string s = to_string(x);

int a = 0;
int b = s.size()-1;

while (a<=b) {
  char temp = s[a];
  s[a] =  s[b];
  s[b] = temp;
  a++;
  b--;
}

long long  m = stoll(s);

if (m> INT_MAX || m< INT_MIN) {
    return 0;
}

if (x>0) return (int)m;
else return (int)-m;

    }
};
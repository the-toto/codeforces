#include <iostream> 
using namespace std;
bool check(string a, string b) {
  if (a[0] == b[0] || a[1] == b[1])
    return 1;
  return 0;
}  
string change1(string &a, string &b) {
  if (a[0] < b[0] and a[1] < b[1]) {
    a[0]++;
    a[1]++;
    return "RU";
  } else 
  if (a[0] < b[0] and a[1] > b[1]) {
    a[0]++;
    a[1]--;
    return "RD";
  } else
  if (a[0] > b[0] and a[1] > b[1]) {
  	a[0]--;
  	a[1]--;
  	return "LD";
  }
  else {
    a[0]--;
    a[1]++;
    return "LU";
  }  
}
string change2(string &a, string &b) {
	if (a[0] == b[0])
	  if (a[1] < b[1]) {
	    a[1]++;
	    return "U";
	  } else {
	    a[1]--;
	    return "D";
	  }
	else {
		if (a[0] < b[0]) {
		  a[0]++;
		  return "R";
		} else {
	    a[0]--;
	    return "L";
	 	}
	}
}
int main() {
	int i = 0;
	string ini, des, path[8];
	cin >> ini >> des;            
	while (ini != des) {
		if (check(ini, des))
		  path[i] = change2(ini, des);
		else 
		  path[i] = change1(ini, des);
	  i++;
	}
	cout << i << '\n';
	for (int j = 0; j < i; j++)
	  cout << path[j] << '\n';
return 0;
}

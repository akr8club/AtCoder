#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <boost/multiprecision/cpp_int.hpp>

using namespace std;
namespace mp = boost::multiprecision;

int main(){
	int n=1;
	cin >> n;

	if (n % 2 == 0) {
		cout << n / 2 - 1;;
	} else {
		cout << (n - 1) / 2;
	}

	return 0;
}
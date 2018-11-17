#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {
	string str[100] = {""};
	string power = "";
	int i = 0;
	while(true) {
		cin >> (str[i]);
		if((str[i]) == "end")	break;
		i++;
	}
	for(int j = 0; j < i; j++) {
		cout << "\"" << str[j] << "\",";
	}
	cout << endl;
	cout << "종료하시겠습니까?";
	cin >> power;
	if(power == "네");
		return 0;
}

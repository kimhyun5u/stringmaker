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
	cout << "�����Ͻðڽ��ϱ�?";
	cin >> power;
	if(power == "��");
		return 0;
}

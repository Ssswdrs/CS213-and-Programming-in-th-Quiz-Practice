#include <iostream>
#include <string>
#include <vector>
using namespace std;

int* letterFreq(vector<string> letter){
	int* freq = new int[26];
	for(int i=0;i<26;i++){
		freq[i] = 0;
	}
	int c = 65, size = 0;
	for(string i : letter){
		string str = i;
		size = str.length();
		for(int j=0;j<size;j++){
			for(int k=0;k<26;k++){
				if(toupper(str.at(j))==(char)(c+k)){
					freq[k]++;
				}
			}
		}
	}
	cout << "Frequency of characters (A-Z): " << endl;
	for(int i=0;i<26;i++){
		if(freq[i]!=0){
			cout << (char)(65+i) << ": " << freq[i] << endl;
		}
	}
	return freq;
}

vector<string> getLine(){
	string str;
	vector<string> strVec;
	int count = 0;
	do{
		cout << "Enter line: (blank line when done!) ";
		getline(cin, str);
		strVec.push_back(str);
		count++;
	}while(!str.empty());
	cout << "Frequency of characters from your input:" << endl;
	for(string a : strVec){
		if(!a.empty())cout << "\t" << a << endl;
	}
	cout << "Number of lines " << count-1 << endl;
	return strVec;
}

int main() {
	vector<string> line = getLine();
	int* result = letterFreq(line);\
	delete[] result;
	return 0;
}

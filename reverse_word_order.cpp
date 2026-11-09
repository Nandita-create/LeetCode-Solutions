//Reverse Words in a String
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        
        vector<string> words_collect;
        string word = "";
        int len = s.size();

        if (s[len-1]!=' ')
        {
            s = s + ' ';
            len++;
        }

        for (int i=0 ; i<len ; i++)
        {
            if (word=="" && s[i]==' ')
            continue;

            if (word!="" && s[i]==' ')
            {
                words_collect.push_back(word);
                word="";
                continue;
            }

            word.push_back(s[i]);
        }

        string result = "";
        int size = words_collect.size();

        for (int i=size-1 ; i>=0 ; i--)
        {
            result += words_collect[i];
            if (i!=0)
            result += ' ';
        }

        return result;
    }
};

int main() {
	string s;
	cout<<"Enter a sentence: ";
	getline(cin, s);
	
	Solution reverse;
	string results = reverse.reverseWords(s);
	
	cout<<"String with reversed words: "<<results<<endl;
	
	return 0;
}

//run using: 
//g++ reverse_word_order.cpp -o reverse_word_order
//./reverse_word_order
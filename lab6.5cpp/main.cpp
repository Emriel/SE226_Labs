#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> commonElements(vector<int> intList1, vector<int> intList2) {
    vector<int> result;
    for (int i = 0; i < intList1.size(); i++) {
        for (int j = 0; j < intList2.size(); j++){
            if(intList1[i] == intList2[j]){
                result.push_back(intList1[i]);
            }
        }
    }
    return result;
}
vector<string> palindromeStrings(vector<string> stringList) {
    vector<string> palindromeResult;
    for (string s : stringList) {
        bool isPalindrome = true;
        for (int i = 0; i < s.length() / 2; i++) {
            if (s[i] != s[s.length() - i - 1]) {
                isPalindrome = false;
                break;
            }
        }
        if (isPalindrome) {
            palindromeResult.push_back(s);
        }
    }
    return palindromeResult;
}
vector<int> sieveOfEratosthenes(vector<int> intList) {
    int maxNum = INT_MIN;
    for(int i=0; i<intList.size();i++){
        if(intList[i] > maxNum){
            maxNum = intList[i];
        }
    }
    vector<int> sieve(maxNum+1, true);
    sieve[0] = false;
    sieve[1] = false;
    for (int i = 2; i*i <= maxNum; i++) {
        if (sieve[i]) {
            for (int j = i*i; j <= maxNum; j += i) {
                sieve[j] = false;
            }
        }
    }
    vector<int> result;
    for (int num : intList) {
        if (sieve[num]) {
            result.push_back(num);
        }
    }
    return result;
}
vector<string> anagrams(string word, vector<string> word_list) {
    vector<string> anagram_list;
    vector<char> sorted_word(word.begin(), word.end());
    sort(sorted_word.begin(), sorted_word.end());

    for (string w : word_list) {
        vector<char> sorted_w(w.begin(), w.end());
        sort(sorted_w.begin(), sorted_w.end());

        if (sorted_w == sorted_word) {
            anagram_list.push_back(w);
        }
    }

    return anagram_list;
}
int main(){
    vector<int> exIntList {1, 2, 3, 4, 5, 6};
    vector<int> exIntList2 {2, 4, 6, 8, 10};
    vector<string> exStringList {"enlist", "google", "rotator", "inlets", "deed", "banana", "deified"};
    vector<int> commonElementsList = commonElements(exIntList, exIntList2);
    for (int a : commonElementsList) {cout << a << " ";}
    cout << endl;
    vector<string> palindromeStringsList = palindromeStrings(exStringList);
    for(string s : palindromeStringsList){cout << s << " ";}
    cout << endl;
    vector<int> sieveOfEratosthenesList1 = sieveOfEratosthenes(exIntList);
    vector<int> sieveOfEratosthenesList2 = sieveOfEratosthenes(exIntList2);
    for(int b:sieveOfEratosthenesList1){cout << b << " ";}
    cout << endl;
    for(int c : sieveOfEratosthenesList2){cout << c << " ";}
    cout << endl;
    vector<string> anagramList = anagrams("listen", exStringList);
    for(string str:anagramList){cout << str << " ";}
    cout << endl;
}
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int hashSequence(const vector<int>& sequence, int lenght) {
    int hashValue = 0;

    for (int i=0; i<lenght; ++i) {
        hashValue+=sequence[i];
    }

    return hashValue;
}

int updateHashSequence(int prevHash, int prevDigit, int newDigit) {
    int hashValue = prevHash - prevDigit + newDigit;
    return hashValue;
}

void rabinKarp(const vector<int>& text, const vector<int>& pattern) {
    int n = text.size();
    int m = pattern.size();

    int hashPattern = hashSequence(pattern, m);
    int hashText = hashSequence(text, m);

    int first=-1, second;

    for(int i=0; i<=n-m; ++i) {
        if(first==-1 && hashPattern == hashText && equal(text.begin() + i, text.begin() + i + m, pattern.begin())){
            first=i;
        }
        else if(first!=-1 && hashPattern == hashText && equal(text.begin() + i, text.begin() + i + m, pattern.begin())){
            second=i;
            break;
        }

        if (i < n - m) {
            hashText = updateHashSequence(hashText, text[i], text[i + m]);
        }
    }

    while(first+second<n){
        int temp=first+second;
        first=second;
        second=temp;
    }
    cout<<first+second-n;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n;
    cin >> n;
    cin.ignore();

    vector<int> text(n);

    for(int i=0; i < n; ++i){
        int temp;
        cin>>temp;
        text[i]=temp;
    }

    int m;
    cin >> m;
    cin.ignore();

    vector<int> intTemplate(m);

    for(int i=0; i < m; ++i){
        int temp;
        cin>>temp;
        intTemplate[i]=temp;
    }

    rabinKarp(text, intTemplate);

    return 0;
}
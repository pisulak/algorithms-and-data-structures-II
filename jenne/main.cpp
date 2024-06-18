#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool compareChars(char textChar, char templateChar){
    if(templateChar=='a'){
        if(islower(textChar))
            return true;
    }
    else if(templateChar=='A'){
        if(isupper(textChar))
            return true;
    }
    else if(templateChar=='0'){
        if(isdigit(textChar))
            return true;
    }
    else if(templateChar=='.'){
        if(textChar=='.')
            return true;
        else if(textChar=='?')
            return true;
        else if(textChar=='!')
            return true;
        else if(textChar==',')
            return true;
        else if(textChar==';')
            return true;
        else if(textChar==':')
            return true;
        else if(textChar=='-')
            return true;
    }
    else if(templateChar==' '){
        if(textChar==' ')
            return true;
    }
    return false;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    string textTemplate;
    getline(cin, textTemplate);

    vector<int> ps(textTemplate.size());

    ps[0]=0;
    int j=0, i=1;

    for(auto el:textTemplate){
        if(textTemplate[j] == textTemplate[i]) {
            ++j;
            ps[i]=j;
            ++i;
        }
        else {
            if(j!=0) {
                j=ps[j-1];
            }
            else {
                ps[i]=j;
                ++i;
            }
        }
    }

    i=0;j=0;
    char t;
    bool wasIncremented=true;
    bool found=false;

    while(true) {
        if(wasIncremented) {
            cin.get(t);
        }
        if(t == '\n')
            break;
        if (compareChars(t, textTemplate[j])) {
            ++i;
            ++j;
            wasIncremented=true;
            if(j==textTemplate.size()) {
                cout << "T";
                found=true;
                break;
            }
        }
        else {
            if (j>0) {
                j = ps[j - 1];
                wasIncremented=false;
            }
            if (j == 0) {
                ++i;
                wasIncremented=true;
            }
        }
    }

    if(!found)
        cout<<"N";

    return 0;
}
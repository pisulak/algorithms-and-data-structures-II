#include <iostream>
#include <set>
#include <vector>

using namespace std;

struct TreeNode{
    int value;
    TreeNode* leftSon;
    TreeNode* rightSon;

    TreeNode(int value) : value(value), leftSon(nullptr), rightSon(nullptr) {}
};

void insert(TreeNode*& root, int value){
    if(root==nullptr){
        root=new TreeNode(value);
        return;
    }
    if(value<root->value)
        insert(root->leftSon, value);
    else
        insert(root->rightSon, value);
}

void trim(TreeNode*& root, int minVal, int maxVal){
    if(root!=nullptr) {
        if (root->value < minVal || root->value > maxVal) {
            if (root->value < minVal && root->rightSon != nullptr) { //jesli wartosc<minimum to zastap prawym synem
                TreeNode *temp = root;
                root = root->rightSon;
                delete temp;
                trim(root->rightSon, minVal, maxVal);
            } else if (root->value > maxVal && root->leftSon != nullptr) { //jesli wartosc>maximum to zastap lewym synem
                TreeNode *temp = root;
                root = root->leftSon;
                delete temp;
                trim(root->leftSon, minVal, maxVal);
            } else {
                trim(root->leftSon, minVal, maxVal);
                trim(root->rightSon, minVal, maxVal);
            }
            return;
        }
    }
}

void insertData(TreeNode*& root, vector<int>& list){
    if(root!=nullptr){
        insertData(root->leftSon, list);
        list.push_back(root->value);
        insertData(root->rightSon, list);
    }
}

void findValue(vector<int>& list, set<int>& set, int value){
    for (int i=0; i<list.size(); ++i){
        int a=list[i];
        int b=value-a;
        if (set.find(b)!=set.end()){
            cout<<b<<" "<<a;
            return;
        }
        else {
            set.insert(a);
        }
    }
    cout<<"NIE ZNALEZIONO";
}

int main() {
    int n;
    cin>>n;
    cin.ignore();

    TreeNode* root=nullptr;

    for(int i=0; i<n; ++i){
        int tempVal;
        cin>>tempVal;
        insert(root, tempVal);
    }

    int minVal, maxVal, value;
    cin>>minVal>>maxVal;
    cin.ignore();
    cin>>value;
    cin.ignore();

    trim(root, minVal, maxVal);

    set<int> set;
    vector<int> list;
    insertData(root, list);

    findValue(list, set, value);

    delete root;

    return 0;
}
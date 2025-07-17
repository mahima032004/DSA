#include<iostream>
#include<vector>
using namespace std;

class node {
    public:
    char ch;
    node *children[26];

    bool isTerminal;

    // constructor
    node(char c) {
        this->ch = c;
        for(int i = 0; i < 26; i++) {
            children[i] = NULL;
            isTerminal = false;
        }
    }
};

void insert(node *root, string word) {
    // base case - jab string ki length khtm ho jaye
    if(word.size() == 0) {
        root->isTerminal = true;
        return;
    }

    // pehla char nikal lo
    char first = word[0];
    int index = first - 'a';
    node *child;

    if(root->children[index] != NULL) {
        child = root->children[index];
    } 
    else {
        child = new node(first);
        root->children[index] = child;
            }

    // recursive call for rest words
    insert(child,word.substr(1));
}

void storeSuggestions(node *curr, vector<string>&temp, string prefix) {
    if(curr->isTerminal) {
        temp.push_back(prefix);
    }

    for(char a = 'a'; a <= 'z'; a++) {
        int index = a - 'a';
         
        node *next = curr->children[index];

        if(next != NULL) {
            prefix.push_back(a);
            storeSuggestions(next,temp,prefix);
            prefix.pop_back();
        }
    }
}

vector<vector<string>> getSuggestions(node *root, string input) {
    node *pre = root;
    vector<vector<string>>output;
    string prefix = "";

    for(int i =0; i < input.size(); i++) {
        char ch = input[i];
        int index = ch -'a';
        node *curr = pre->children[index];
       //check root ka is pe koi child h kya
       if(pre->children[index] == NULL) break;

       else{
        //iske ander sare suggestions store krke laungi
          vector<string>temp;
          prefix = prefix + ch;
          
          storeSuggestions(curr,temp,prefix);
          

          output.push_back(temp);
          pre = curr;
          
       } 
    }

    return output;
}

int main() {
    node *root  = new node('-');
    vector<string>v;
    v.push_back("lord");
    v.push_back("lost");
    v.push_back("love");
    v.push_back("loving");
    v.push_back("lane");
    v.push_back("last");

    for(int i =0; i < v.size(); i++) {
        insert(root,v[i]);
    }

    vector<vector<string>>ans = getSuggestions(root,"lovi");

    for(int i = 0; i < ans.size(); i++) {
        for(int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
            }
            cout << endl;
    }

    return 0;
}
// #include <iostream>
// #include <vector>
// using namespace std;

// class node {
// public:
//     char ch;
//     node *children[26];
//     bool isTerminal;

//     // Constructor
//     node(char c) {
//         this->ch = c;
//         for (int i = 0; i < 26; i++) {
//             children[i] = NULL;
//         }
//         isTerminal = false;
//     }
// };

// // Insert a word into the Trie
// void insert(node *root, string word) {
//     if (word.size() == 0) {
//         root->isTerminal = true;
//         return;
//     }

//     char first = word[0];
//     int index = first - 'a'; // Corrected index calculation
//     node *child;

//     if (root->children[index] != NULL) {
//         child = root->children[index];
//     } else {
//         child = new node(first);
//         root->children[index] = child;
//     }

//     insert(child, word.substr(1));
// }

// // Store suggestions from the current Trie node
// void storeSuggestions(node *curr, vector<string> &temp, string prefix) {
//     if (curr->isTerminal) {
//         temp.push_back(prefix);
//     }

//     for (char a = 'a'; a <= 'z'; a++) {
//         int index = a - 'a';
//         if (curr->children[index] != NULL) {
//             storeSuggestions(curr->children[index], temp, prefix + a);
//         }
//     }
// }

// // Get suggestions for each prefix of the input string
// vector<vector<string>> getSuggestions(node *root, string input) {
//     vector<vector<string>> output;
//     node *pre = root;
//     string prefix = "";

//     for (char ch : input) {
//         int index = ch - 'a';
//         if (pre->children[index] == NULL) break;

//         prefix += ch;
//         pre = pre->children[index];

//         vector<string> temp;
//         storeSuggestions(pre, temp, prefix);
//         output.push_back(temp);
//     }

//     return output;
// }

// int main() {
//     node *root = new node('-');
//     vector<string> words = {"lord", "lost", "love", "loving", "lane", "last"};

//     for (string word : words) {
//         insert(root, word);
//     }

//     string query = "lovi";
//     vector<vector<string>> suggestions = getSuggestions(root, query);

//     for (const auto &group : suggestions) {
//         for (const string &word : group) {
//             cout << word << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

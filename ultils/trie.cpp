#include <bits/stdc++.h>
using namespace std;

class TrieNode{
private:
    TrieNode* child[26];
    bool wordEnd = false;

public:
    TrieNode(){
        for (int i = 0; i <= 25; i++){
            child[i] = nullptr;
        }
    }

    void addNode(char c){
        this->child[c - 'a'] = new TrieNode();
    }

    TrieNode* toNode(char c){
        return this->child[c - 'a'];
    }

    bool isExist(char c){
        return child[c - 'a'] != nullptr;
    }

    void setWordEnd(bool isWord){
        this->wordEnd = isWord;
    }

    bool isWord(){
        return wordEnd;
    }
};

class Trie {
private:
    TrieNode* root = new TrieNode();

public:
    Trie() {
        
    }

    TrieNode* getRoot(){
        return this->root;
    }
    
    void insert(string word) {
        TrieNode* cur = root;

        for (auto c : word){
            if (!cur->isExist(c)){;
                cur->addNode(c);
            }

            cur = cur->toNode(c);
        }

        cur->setWordEnd(true);
    }
    
    bool search(string word) {
        TrieNode* cur = root;

        for (auto c : word){
            if (!cur->isExist(c)) return false;

            cur = cur->toNode(c);
        }

        return cur->isWord();
    }
    
    bool startsWith(string prefix) {
        TrieNode* cur = root;

        for (auto c : prefix){
            if (!cur->isExist(c)) return false;

            cur = cur->toNode(c);
        }

        return true;
    }
};
#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    vector<vector<string>> displayContacts(int n, string contact[], string s)
    {
        vector<vector<string>>ans;
        struct TrieNode{
            TrieNode* child[26];
            bool fin;
            TrieNode(){fin=false; for(int i=0;i<26;i++)child[i]=nullptr;}
        };
        TrieNode* rt=new TrieNode();
        auto ins_trie = [&](string word){
            TrieNode* curr=rt;
            for(auto i:word) 
            {
                if(curr->child[i-'a']==nullptr) curr->child[i-'a']=new TrieNode();
                curr=curr->child[i-'a'];
            }
            curr->fin=true;
        };
        set<string>st;
        //have to dfs for ans construction
        function<void(TrieNode*,string)> dfs = [&](TrieNode* cr,string hld){
            if(cr->fin) st.insert(hld);
            for(int i=0;i<26;i++)
            {
                if(cr->child[i]!=nullptr)
                {
                    hld.push_back('a'+i);
                    dfs(cr->child[i],hld);
                    hld.pop_back();
                }
            }
        };
        
        for(int i=0;i<n;i++) ins_trie(contact[i]);
        TrieNode* tempo=rt; 
        string temp;
        int lvl=0;
        for(auto i:s)
        {
            lvl++;
            vector<string>tempe;
            temp.push_back(i);
            if(tempo->child[i-'a']==nullptr) {
                for(int it=lvl;it<=s.size();it++) ans.push_back({"0"});
                 break;
            }
            else
            {
                dfs(tempo->child[i-'a'],temp);
                tempo=tempo->child[i-'a'];
            }
            if(st.empty()) ans.push_back({"0"});
            else 
            {
                for(auto i:st) tempe.push_back(i);
                ans.push_back(tempe);
            }
            st.clear();
        }
        return ans;
    }
};
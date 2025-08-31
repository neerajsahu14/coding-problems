class Trie {
public:
    Trie* childern[26];
    bool isterminal;
    Trie() {
        for (int i = 0; i < 26; i++) {
            childern[i] = NULL;
        }
        isterminal = false;
    }
};

class Solution {
public:
    Trie* root;
    Solution(){
        root=new Trie();
    }
    void add(string s){
        Trie* ptr=root;
        for(char c:s){
            int i=c-'a';
            if(ptr->childern[i]==NULL){
                ptr->childern[i]=new Trie();
            }
            ptr=ptr->childern[i];
        }
        ptr->isterminal=true;
    }
    string search(string s){
        Trie* ptr=root;
        string ans;
        for(char c: s){
            int i=c-'a';
            if(ptr->childern[i]==NULL){
                return s;
            }
            ans+=c;
            if(ptr->childern[i]->isterminal){
                return ans;
            }
            ptr=ptr->childern[i];
        }
        return s;
    }
    string replaceWords(vector<string>& dictionary, string sentence) {
    for(string s:dictionary )
        add(s);
        stringstream SS(sentence);
        string s,ans;
        while(SS>>s){
            if(!ans.empty()){
                ans+=" ";
            }
            ans+=search(s);
        }
        return ans;
    }

};
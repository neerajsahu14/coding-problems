class trieNode{
    public: 
    // char  data;
    trieNode* children[26];
    bool isterminal;
    trieNode(){
        for(int i=0; i<26; i++)
         children[i]=NULL;
        isterminal=false; 
    }
};
class Trie {
    private:
     trieNode* root;
    public:
    Trie() {
        root= new trieNode();
    }
    void insertutill(trieNode* root,string word){
        
        if(word.size()==0){
            root->isterminal=true;
            return;
        }
        int i= word[i]-'a';
        trieNode* child;
        if(root->children[i]!=NULL){
            child=root->children[i];
        }
        else{
            child = new trieNode();
           root-> children[i]=child;
            }
        insertutill(child,word.substr(1));
    }
    void insert(string word) {
        insertutill(root,word);
    }
    bool searchutill(trieNode* root,string word){
        if(word.size()==0){
            return root->isterminal;
        }
         int i= word[i]-'a';
        trieNode* child;
        if(root->children[i]!=NULL)
         child= root->children[i];
         else
            return false;
        return searchutill(child,word.substr(1));
    }
    bool search(string word) {
         return searchutill(root,word);
    }
    bool startsWithutill(trieNode* root,string word){
         if(word.size()==0){
            return true;
        }
         int i= word[i]-'a';
        trieNode* child;
        if(root->children[i]!=NULL)
         child= root->children[i];
         else
            return false;
        return startsWithutill(child,word.substr(1)); 
    }
    bool startsWith(string prefix) {
        return startsWithutill(root,prefix);
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
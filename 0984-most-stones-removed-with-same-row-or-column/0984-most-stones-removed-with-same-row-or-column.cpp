class Solution {
public:

    int connectedComponentCount = 0;

    int findRepresentative(int element, vector<int>& setRepresentatives) {
        if (setRepresentatives[element] == 0) {
            setRepresentatives[element] = element;
            connectedComponentCount++;
        }
        return setRepresentatives[element] == element ? element : 
               (setRepresentatives[element] = findRepresentative(setRepresentatives[element], setRepresentatives));
    }

    void merge(int elementA, int elementB, vector<int>& setRepresentatives) {
        int repA = findRepresentative(elementA, setRepresentatives);
        int repB = findRepresentative(elementB, setRepresentatives);
        if (repA != repB) {
            setRepresentatives[repB] = repA;
            connectedComponentCount--;
        }
    }
    int removeStones(vector<vector<int>>& stones) {
        vector<int> set(20003,0);
        for(auto it: stones)
            merge(it[0]+1 , it[1]+10002, set);
        return stones.size()-connectedComponentCount;    
    }
};
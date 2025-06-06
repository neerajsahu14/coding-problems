class Solution {
    fun findWordsContaining(words: Array<String>, x: Char): List<Int> {
        val ans = mutableListOf<Int>()

        for((index,word) in words.withIndex()){
            if(x in word){
                ans.add(index)
            }
        }

        // val n = words.size
        // for(i in 0 until n){
        //     for(ch in words[i]){
        //         if(ch == x){
        //             ans.add(i)
        //             break
        //         }
        //     }
        // }
        return ans
    }
}
class Solution {
    fun longestCommonPrefix(strs: Array<String>): String {
        if(strs.isEmpty() || strs[0].isEmpty()) return ""
        val n = strs.size
        val sb = StringBuilder()
        val first = strs[0]
        for(i in 0 until first.length){
            val curr = first[i]
            for( j in 0 until n){
                if( strs[j].length <= i || strs[j][i] != curr)
                    return sb.toString()
            }
            sb.append(curr)
        }
        return sb.toString()
    }
}
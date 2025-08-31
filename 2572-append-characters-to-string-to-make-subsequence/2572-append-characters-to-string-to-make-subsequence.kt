class Solution {
    fun appendCharacters(s: String, t: String): Int {
        var m= s.length
        var n= t.length
        var i=0
        var j=0
        while(i<m && j<n){
            if(s[i]==t[j]) j++  
        i++
        }
        return n-j
    }
}
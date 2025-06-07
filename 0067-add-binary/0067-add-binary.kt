class Solution {
    fun addBinary(a: String, b: String): String {
        var i = a.length -1
        var j = b.length -1
        val sb = StringBuilder()
        var carry = 0
        while(i >= 0 || j >= 0 || carry != 0){
            var sum = carry
            if(i>=0) sum+= a[i]- '0'
            if(j>=0) sum+= b[j] - '0'
            sb.append(sum%2)
            carry = sum/2
            i--
            j--
        }
        return sb.reverse().toString()
       
    }
}
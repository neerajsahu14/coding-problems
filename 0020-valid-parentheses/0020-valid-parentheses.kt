class Solution {
    fun isValid(s: String): Boolean {
        val n = s.length
        if(n%2 == 1) return false;
        val st = ArrayDeque<Char>();
        for (ch in s){
            when(ch){
                '[','{','(' -> st.addLast(ch)
                '}',']',')' ->{
                    if(st.isEmpty()) return false;
                    val top = st.removeLast();
                    if(( ch ==')' && top !='(') ||
                    ( ch =='}' && top !='{') ||
                    ( ch ==']' && top !='[')
                    ) return false;
                }
            }
        }
        return st.isEmpty()
    }
}
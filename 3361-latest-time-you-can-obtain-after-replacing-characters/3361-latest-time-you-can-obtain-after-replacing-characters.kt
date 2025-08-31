class Solution {
    fun findLatestTime(s: String): String {
    val timeArray = s.toCharArray()
    
    if (timeArray[0] == '?' && timeArray[1] == '?') {
        timeArray[0] = '1'
        timeArray[1] = '1'
    } else if (timeArray[0] == '?') {
        if (timeArray[1] == '1' || timeArray[1] == '0' ) {
            timeArray[0] = '1'
        } else {
            timeArray[0] = '0'
        }
    } else if (timeArray[1] == '?') {
        if (timeArray[0] == '1') {
            timeArray[1] = '1'
        } else {
            timeArray[1] = '9'
        }
    }
    
    if (timeArray[3] == '?') {
        timeArray[3] = '5'
    }
    if (timeArray[4] == '?') {
        timeArray[4] = '9'
    }
    
    return timeArray.joinToString("")
  }
}
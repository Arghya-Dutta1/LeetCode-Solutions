class Solution {
    public String removeOccurrences(String s, String part) {
        while(s.indexOf(part)!=-1){
            String ans=s.replaceFirst(part, "");
            s=ans;
        }
        return s;
    }
}
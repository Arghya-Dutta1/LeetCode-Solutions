class Solution {
    public String reverseWords(String s) {
        s=s.trim();
        String st[]=s.split(" ");
        String r="";
        for(String i:st){
            if(i.length()!=0)
                r=i+" "+r;
        }
        return r.trim();
    }
}
class Solution {
    public String solution(String[] id_pw, String[][] db) {
        String answer = "";
        for(String[] d : db){
            if(d[0].equals(id_pw[0]) && d[1].equals(id_pw[1])) {
                answer = "login";
                break;
            } else if(d[0].equals(id_pw[0])) {
                answer = "wrong pw";
            } else if(!answer.equals("wrong pw")){
                answer = "fail";
            }
        }
        return answer;
    }
}
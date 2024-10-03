class Solution {
    int timeToSecond(String time) {
        int minutes = Integer.parseInt(time.substring(0, 2));
        int seconds = Integer.parseInt(time.substring(3, 5));
        return minutes * 60 + seconds;
    }
    
    String secondToTime(int seconds) {
        int minute = seconds / 60;
        int second = seconds % 60;
        return String.format("%02d:%02d", minute, second);
    }
    
    public String solution(String video_len, String pos, String op_start, String op_end, String[] commands) {
        int videoSecond = timeToSecond(video_len);
        int currentSecond = timeToSecond(pos);
        int opStartSecond = timeToSecond(op_start);
        int opEndSecond = timeToSecond(op_end);
        
        if (opStartSecond <= currentSecond && currentSecond <= opEndSecond) {
            currentSecond = opEndSecond;
        }

        for(String command : commands) {
            if (command.equals("prev")) {
                currentSecond = Math.max(0, currentSecond - 10);
            } else if (command.equals("next")) {
                currentSecond = Math.min(videoSecond, currentSecond + 10);
            }
            if (opStartSecond <= currentSecond && currentSecond <= opEndSecond) {
                currentSecond = opEndSecond;
            }
        }

        return secondToTime(currentSecond);
    }
}
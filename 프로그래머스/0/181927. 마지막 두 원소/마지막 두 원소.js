function solution(num_list) {
    const length = num_list.length;
    var answer = [];
    var temp = 0;
    
     if(num_list[length - 2] < num_list[length - 1]) {
         temp = num_list[length - 1] - num_list[length - 2];
     } else {
         temp = num_list[length - 1] * 2;
     }

    for(let i = 0; i < length; i++) {
        answer[i] = num_list[i];
    }
    
    answer[length] = temp;
    return answer;
}
function solution(num_list) {
    var answer = 0;
    var odd = "", even = "";
    
    for(let i = 0; i < num_list.length; i++) {
        if(num_list[i] % 2 == 0) {
            even += String(num_list[i]);
        } else {
            odd += String(num_list[i]);
        }
    }
    
    answer = parseInt(even) + parseInt(odd);
    return answer;
}
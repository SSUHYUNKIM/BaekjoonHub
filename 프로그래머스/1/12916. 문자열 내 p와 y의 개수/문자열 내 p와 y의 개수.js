function solution(s){
    let temp1 = 0, temp2 = 0;

    for(let i = 0; i < s.length; i++)
    {
        if(s[i] == 'p' || s[i] == 'P')
            temp1 += 1;
        else if(s[i] == 'y' || s[i] == 'Y')
            temp2++;
    }

    return temp1 == temp2;;
}
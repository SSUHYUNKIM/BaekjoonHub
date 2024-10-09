#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int binaryStringToInt(string bin) {
    int result = 0;
    for (char c : bin) {
        result = result * 2 + (c - '0');
    }
    return result;
}

string intToBinaryString(int num) {
    if (num == 0) return "0";
    
    string result = "";
    while (num > 0) {
        result += (num % 2 == 0 ? '0' : '1');
        num /= 2;
    }
    
    reverse(result.begin(), result.end());
    return result;
}

string solution(string bin1, string bin2) {
    int binary1 = binaryStringToInt(bin1);
    int binary2 = binaryStringToInt(bin2);
    
    return intToBinaryString(binary1 + binary2);
}
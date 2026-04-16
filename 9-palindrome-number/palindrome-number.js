/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function(x) {
    let oriNum = x;
    let revNum = 0;
    while (x > 0){
        let lastDigit = x%10;
        revNum = revNum * 10 + lastDigit;
        x = Math.floor(x/10);
    }
    if(oriNum === revNum) {
        return true;
    }
    return false;
    
};
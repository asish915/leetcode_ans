class Solution {
public:
    int gcd(int a, int b){
        while(b != 0){
            int temp = b;
            b = a%b;
            a = temp;

        }
        return a;
    }

    int gcdOfOddEvenSums(int n) {
        /* simply return n 
        Explanation:-
        sum of odd nos= 1+3+5+...+(2n-1)
        sum of odd nos= n*n 
        
        sum of even nos= 2+4+6+...+2n
        sum of even nos= 2(1+2+3+...+n)
                        = 2(n(n+1)/2)
                        = n(n+1)
                        = n*n + n
        therefore = GCD(n*n, n(n+1)) will be n
        */

        // return n;

        int sumEven = 0;
        int sumOdd = 0;
        int odd=1;
        for(int i=0;i<n;i++){
            sumOdd = sumOdd+odd;
            odd = odd+2;
        }

        int even=2;
        for(int i=0;i<n;i++){
            sumEven = sumEven+even;
            even = even+2;
        }
        return gcd(sumOdd, sumEven);

        
        
    }
};
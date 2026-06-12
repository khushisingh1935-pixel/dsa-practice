int count(int n){
    int count = 0; 
    while(n>0){
        int lastDigit = n%10;
        count++;
        n = n/10;
    }
    return count;
}
// ALTERNATIVE WAY 
int count(int n){
    int count = (int)(log10(n) + 1);
    return count++;
}
//dividing means tc will be logarithmic 
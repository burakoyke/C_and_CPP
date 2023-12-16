int birthday(vector<int> s, int d, int m) {
    
    int sum,count=0;
    for(int i=0; i<s.size(); i++) {
        sum=0;
        for(int j=0; j<m; j++) {
            sum += s[j+i];
        }
        if(sum==d)
            count++;
    }
    return count;
}

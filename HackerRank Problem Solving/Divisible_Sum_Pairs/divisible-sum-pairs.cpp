int divisibleSumPairs(int n, int k, vector<int> ar) {
    int count {0};
    for (int i {0}; i < n; i++){
        for (int j {i+1}; j < n; j++) {
            if ((ar.at(i) + ar.at(j) ) % k == 0) {
                count++;
            }
        }
    }  
    return count;            
}

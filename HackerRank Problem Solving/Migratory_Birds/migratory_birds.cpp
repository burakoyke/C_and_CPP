int migratoryBirds(vector<int> arr) {
    
    int maxCount {0};
    int repeatCountMax {1};
    int repeatMax = arr[0];
    sort(arr.begin(), arr.end());
    for (int i = 0 ; i<arr.size(); i++) {
        if (arr[i] == arr[i+1]){
            repeatCountMax++;
            if(repeatCountMax>maxCount){
                repeatMax = arr[i];
            }
            if (repeatCountMax>maxCount) {
                maxCount = repeatCountMax;
            }
            continue;
        }
        repeatCountMax = 1 ;
    }
    return repeatMax;

}

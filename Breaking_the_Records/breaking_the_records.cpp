vector<int> breakingRecords(vector<int> scores) {
    
    int minScore = scores[0];
    int maxScore = scores[0];
    int minCount = 0, maxCount = 0;

    for (size_t i = 1; i < scores.size(); ++i) {
        if (scores[i] > maxScore) {
            maxScore = scores[i];
            ++maxCount;
        }

        if (scores[i] < minScore) {
            minScore = scores[i];
            ++minCount;
        }
    }

    return {maxCount, minCount};

}

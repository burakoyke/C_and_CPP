void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    int appleCount {0};
    int orangeCount {0};
    for (auto e : apples) {
        e = e + a;
        if (e>=s && e<=t) {
            appleCount++;
        }
    }
    for (auto e : oranges) {
        e = e + b;
        if (e<=t && e>=s) {
            orangeCount++;
        }
    }
    cout << appleCount << endl;
    cout << orangeCount << endl;

}

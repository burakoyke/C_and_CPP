/*

*You are in charge of the cake for a child's birthday. You have decided the cake will have one candle for each year of their total age. They will only be able to blow out the tallest of the candles. *Count how many candles are tallest.

candles = [4,4,1,3]

The maximum height candles are 4 units high. There are 2 of them, so return 2.

*/

int birthdayCakeCandles(vector<int> candles) {
    sort (candles.begin(), candles.end());
    int i = candles.size()-1;
    int count = 0;
    while (candles[i] == candles[candles.size()-1]) {
        i--;
        count++;
    }
    return count;
}

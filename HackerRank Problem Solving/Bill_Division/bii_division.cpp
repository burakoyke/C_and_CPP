void bonAppetit(vector<int> bill, int k, int b) {

    bill.erase(bill.begin()+k);
    int b_actual = accumulate(bill.begin(), bill.end(), 0)/2;
    (b - b_actual == 0) ? cout << "Bon Appetit" : cout << b - b_actual;

}

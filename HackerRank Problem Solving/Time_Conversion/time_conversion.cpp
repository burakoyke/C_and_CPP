/*
* Given a time in 12-hour AM/PM format, convert it to military (24-hour) time.
* Note: - 12:00:00AM on a 12-hour clock is 00:00:00 on a 24-hour clock.
* - 12:00:00PM on a 12-hour clock is 12:00:00 on a 24-hour clock.
*/
string timeConversion(string s) {
    int time;
    string timeStr;
    if (s[s.size()-2] == 'A'){
        if (s[0] == '1' && s[1] == '2') {
            s[0] = '0';
            s[1] = '0';
            s[s.size()-1] = '\n';
            s[s.size()-2] = '\n';
        } else {
            s[s.size()-1] = '\n';
            s[s.size()-2] = '\n';
        }
    } else {
        timeStr[0] = s[0];
        timeStr[1] = s[1];
         if (s[0] == '1' && s[1] == '2') {
             time = stoi(timeStr);
         } else {
            time = stoi(timeStr) +12;
         }
        timeStr = to_string(time);
        s[0] = timeStr[0];
        s[1] = timeStr [1];
        s[s.size()-1] = '\n';
        s[s.size()-2] = '\n';
    }
return s;
}

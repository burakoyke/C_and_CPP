    string res;
    if (x1>x2 && v1>=v2) {
        res = "NO";
    } else if( x2>x1 && v2>=v1) {
        res = "NO";
    } else {
        
        if ((x2-x1)%(v1-v2)==0) {
             res="YES";
        } else {
            res = "NO";
        }
    }
    return res;
}

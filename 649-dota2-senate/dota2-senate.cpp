class Solution {
public:
string predictPartyVictory(string senate) {
    int n = senate.length();
    queue<int> qR, qD;

    for (int i = 0; i < n; ++i)
        if (senate[i] == 'R') qR.push(i);
        else qD.push(i);

    while (!qR.empty() && !qD.empty()) {
        int indexR = qR.front();
        qR.pop();
        int indexD = qD.front();
        qD.pop();
        if (indexR < indexD) qR.push(indexR + n);
        else qD.push(indexD + n);
    }

    return qR.empty() ? "Dire" : "Radiant";   
}
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();
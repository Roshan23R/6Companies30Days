//Approach -- put in set all types of distance and if two types of values are there then it is square i.e edge and diagonal
//Leetcode- 593. Valid Square
class Solution {
public:
    int distance(vector<int>& a, vector<int> &b){
        return pow(b[0] - a[0] , 2) + pow(b[1] - a[1],2);
    }
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        int d12, d23, d34, d41, d13, d24;
        d12=distance(p1, p2);
        d23=distance(p2, p3);
        d34=distance(p3, p4);
        d41=distance(p4, p1);
        d13=distance(p1, p3);
        d24=distance(p2, p4);
        unordered_set <int> s;
        s.insert({d12, d23, d34, d41, d13, d24});

        return !s.count(0) && s.size() == 2;
    }
};
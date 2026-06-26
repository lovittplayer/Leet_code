class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> q;
        int n = students.size();
        for (int i = 0 ;i<n;i++) {
            q.push(students[i]);
        }
        int count = 0;
        int i = 0;

        while(q.size()!=0 && count!=q.size()) {
        
            if (q.front()==sandwiches[i]) {
                q.pop();
                i++;
                count = 0;
            }

            else {
                int m = q.front();
                q.pop();
                q.push(m);
                count++;
            }
            
        }
        return q.size();
    }

};
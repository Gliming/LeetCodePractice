class Solution {
public:
    string simplifyPath(string path) {
        stack<string> rs;
        int lastPos = 0;
        int len = path.size();
        string dir = "";
        if (path[len - 1] != '/'){
            path += "/";
            len++;
        }
        
        for (int i = 0; i < len; i++){
            if (path[i] == '/'){
                dir = path.substr(lastPos, i - lastPos);
                lastPos = i + 1;
                if (dir == "" || dir == ".")
                    continue;
                if (dir == ".."){
                    if (!rs.empty()){
                        rs.pop();
                    }
                }
                else{
                    rs.push(dir);
                }
            }
        }
        
        string rstr = "";
        while(!rs.empty()){
            rstr = "/" + rs.top() + rstr;
            rs.pop();
        }
        if (rstr == "") rstr = "/";
        return rstr;
    }
};
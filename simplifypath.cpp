class Solution {
public:
    string simplifyPath(string path) {
                vector<string> dirs;
        int N = path.size(), i = 0;
        while (i < N) {
            if (path[i] == '/') {
                i++;
            } else {
                string dir;
                while (i < N && path[i] != '/') {
                    dir += path[i++];
                }
                if (dir == "..") {
                    if (!dirs.empty())
                        dirs.pop_back();
                } else if (dir != ".") {
                    dirs.push_back(dir);
                }
            }
        }
        string res;
        for (string dir: dirs) {
            res += "/" + dir;
        }
        return res == "" ? "/" : res;
    
    }
};

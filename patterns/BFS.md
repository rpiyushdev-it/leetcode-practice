There are three ways to write BFS. For real BFS problems, the first way is simple but not often used because it’s limited. The second way is the most common—most medium-level BFS problems can be solved this way. The third way is a bit more complex but more flexible. For harder problems, you may need the third way. In the next chapter, 
BFS Problems, you’ll see some hard questions that use the third way. You can try them yourself later.

```cpp

// BFS traversal of the graph starting from s, and record the steps
// When the target node is reached, return the number of steps

int bfs(const Graph& graph, int s, int target) {
    vector<bool> visited(graph.size(), false);
    queue<int> q;
    q.push(s);
    visited[s] = true;

    // record the number of steps taken from s to the current node taken
    int step = 0;
    while (!q.empty()) {
        int sz = q.size();
        for (int i = 0; i < sz; i++) {
            int cur = q.front();
            q.pop();
            cout << "visit " << cur << "at step " << step << endl;

            // determine if the target point is reached
            if (cur == target) {
                return step;
            }

            // add the neighbors to the queue to search around
            for (int to : neighbourOf(cur)) {
                if (!visited[to]) {
                    q.push(to);
                    visited[to] = true;
                }
            }
        }
        step++;
    }
    // If we reach here, it means the target node was not found in the graph
    return -1;
}

```

Problems:
1) Sliding Puzzle: https://leetcode.com/problems/sliding-puzzle/description/
2) Open the lock: https://leetcode.com/problems/open-the-lock/description/

References:
1) https://labuladong.online/en/algo/essential-technique/bfs-framework/
2) https://crackingwalnuts.com/dsa-templates/bfs-template
3) https://cp-algorithms.com/graph/01_bfs.html
4) https://www.interviewcake.com/concept/cpp/bfs
5) https://codinginterviewhq.com/coding-patterns/graph-traversal/template/
6) https://www.hackerearth.com/practice/algorithms/graphs/breadth-first-search/tutorial/
7) https://nlogk.osjobs.net/template/bfs
8) https://leetcode.com/discuss/post/1072548/a-beginners-guid-to-bfs-and-dfs-by-revat-038l/
9) https://github.com/topics/bfs-dfs?l=c%2B%2B&o=asc&s=updated
10) https://github.com/Uknowndynamic/Graph-Algorithms-and-Problems
11) https://github.com/AbdullahArean/Design-And-Analysis-Of-Algorithm-Data-Structure
12) https://techbum.io/breadth-first-search-graph-traversal-patterns
13) https://leetcode.com/discuss/post/1833581/bfs-and-its-variations-by-c0d3m-o47u/
14) https://coderraj07.medium.com/graph-bfs-mastery-all-problems-0-10-in-python-javascript-java-b92ad61e090c
15) https://www.reddit.com/r/leetcode/comments/16rb11m/try_this_pattern_for_breadth_first_search/

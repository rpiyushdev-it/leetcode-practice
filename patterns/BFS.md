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



References:
1) https://labuladong.online/en/algo/essential-technique/bfs-framework/

/* Breadth First Search
 * Number of Vertices: n
 * Source: s
 * Distance Array: dist[]
 * Adjacency List: adj[][]
 * Infinite Constant: inf
 */

void bfs()
{
    for(int i=0;i<n;++i)
    {
        dist[i] = inf;
    }

    queue<int> q;
    q.push(s);
    dist[s] = 0;

    while(!q.empty())
    {
        int u = q.front();
        q.pop();

        for(int i=0;i<adj[u].size();++i)
        {
            int v = adj[u][i];
            if(dist[v]==inf)
            {
                dist[v] = dist[u]+1;
                q.push(v);
            }
        }
    }
}

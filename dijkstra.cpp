/* Dijkstra's Single Source Shortest Path Algorithm
 * Number of Vertices: n
 * Source: s
 * Distance Array: dist[]
 * Adjacency List: adj[][] tuple(vertex, weight)
 * Infinte Constant: inf
 */

void dijkstra()
{
    for(int i=0;i<n;++i) 
    {
        dist[i] = inf;
    }

    set< tuple<int,int> > q;
    dist[s] = 0;
    q.insert(make_tuple(0,s));

    while(!q.empty())
    {
        int u = get<1>(*q.begin());

        for(int i=0; i<adj[u].size(); ++i)
        {
            int v = get<0>(adj[u][i]);
            int w = get<1>(adj[u][i]);
            
            if(dist[v] > dist[u]+w) 
            {
                if(dist[v] != inf)
                {
                    q.erase(q.find(make_tuple(dist[v],v)));
                }
                dist[v] = dist[u]+w;
                q.insert(make_tuple(dist[v],v));
            }
        }
    }
}

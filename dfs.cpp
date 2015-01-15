/* Depth First Search
 * Adjacency List: adj[][]
 * Visited Check: vis[]
 */

void dfs(int u)
{
    vis[u] = 1;
    for(int i=0;i<adj[u].size();++i)
    {
        int v = adj[u][i];
        if(!vis[v])
        {
            dfs(v);
        }
    }
}

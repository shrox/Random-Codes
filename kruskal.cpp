/* Kruskal's Minimum Spanning Tree Algorithm
 * Edge List: e tuple(weight,a,b)
 * Number of Edges: m
 * Number of Vertices: n
 * Parent in DS: par[]
 * Height in DS: rank[]
 */

int findPar(int v)
{
    if(par[v]==v)
    {
        return v;
    }
    par[v] = findPar(par[v]);
}

void merge(int a, int b)
{
    if(rank[a] < rank[b])
    {
        par[a] = b;
    }
    else
    {
        par[b] = a;
        if(rank[a] == rank[b])
        {
            rank[a]++;
        }
    }
}

void kruskal()
{
    sort(e,e+m);
    
    for(int i=0;i<n;++i)
    {
        rank[i] = 1;
        par[i] = i;
    }

    for(int i=0;i<m;++i)
    {
        int a = get<1>(e), b = get<2>(e);

        if(findPar(a) != findPar(b)) 
        {
            merge(findPar(a),findPar(b));
        }
    }
}

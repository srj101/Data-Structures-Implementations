g = {
    "a": ["b","c"],
    "b": ["d"],
    "d": ["f"],
    "c": ["e"],
    "e": [],
    "f":[]
}

def bfs(g,s):
    m = []
    q = [s]
    while len(q)>0:
        m.append(q[0])
        for j in g[q[0]]:
            q.append(j)
        q.pop(0)
    return m

print(bfs(g,"a"))
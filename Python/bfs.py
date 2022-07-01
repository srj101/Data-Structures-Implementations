g = {
    "a": ["c","b"],
    "b": ["d"],
    "c": ["e"],
    "d": ["f"],
    "e": [],
    "f":[]
}

# BFS
def bfs(g,s):
    m = []
    q = [s]
    while len(q)>0:
        current = q.pop()
        m.append(current)
        for i in g[current]:
            q.append(i)
    return m
print(bfs(g,"a"))
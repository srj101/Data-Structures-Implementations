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
    stack = [s]
    while len(stack)>0:
        m.append(stack[0])
        for j in g[stack[0]]:
            stack.append(j)
        stack.pop(0)
    return m

print(bfs(g,"a"))
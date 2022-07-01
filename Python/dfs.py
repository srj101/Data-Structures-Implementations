g = {
    "a": ["b","c"],
    "b": ["d"],
    "d": ["f"],
    "c": ["e"],
    "e": [],
    "f":[]
}
# Depth First Traversal
def dfs(g,s):
    m = []
    stack = [s]
    while len(stack)>0:
        current = stack.pop()
        m.append(current)
        for j in g[current]:
            stack.append(j)
    return m

print(dfs(g,"a"))
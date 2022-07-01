g = {
    "a": ["c","b"],
    "b": ["d"],
    "c": ["e"],
    "d": ["f"],
    "e": [],
    "f":[]
}

# Recursive DFS
def dfs(g,s):
    print(s)
    for i in g[s]:
        dfs(g,i)

print(dfs(g,"a"))
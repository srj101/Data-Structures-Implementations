g = {
    "a": ["c","b"],
    "b": ["d"],
    "c": ["e"],
    "d": ["f"],
    "e": [],
    "f":[]
}


def dfsHasPath(g,s,dst):
    if s == dst:
        return True
    for i in g[s]:
        if dfsHasPath(g,i,dst) == True:
            return True
    return False
print(dfsHasPath(g,"a","f"))
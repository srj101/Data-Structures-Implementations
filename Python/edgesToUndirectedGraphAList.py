edges = [
    ["a","b"],
    ["a","c"],
    ["b","d"],
    ["c","e"],
    ["d","f"],
]


def buildGraph(edges):
    graph = {}
    
    for edge in edges:
        a,b = edge
        if not(a in graph):
            graph[a] = []
        if not(b in graph):
            graph[b] = []
        graph[a].append(b)
        graph[b].append(a)
    return graph
    
print(buildGraph(edges))
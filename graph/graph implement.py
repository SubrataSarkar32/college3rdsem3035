'''This file contains implementation of graphs in python'''
def takegraphinput():
    '''Take a graph input'''
    n=int(input())
    graph=dict()
    for i in range(n):
        x,y=map(int,input())
        graph[x]=y
    return graph

def find_path(graph, start, end, path=[]):
    '''to find non-particular path between a and b using dfs
       if  found:
           returns a list
       else:
           return -1'''
        path = path + [start]
        if start == end:
            return path
        if not graph.has_key(start):
            return None
        for node in graph[start]:
            if node not in path:
                newpath = find_path(graph, node, end, path)
                if newpath: return newpath
        return -1

 def find_all_paths(graph, start, end, path=[]):
     '''to find list of all paths between a and b
       if  found:
           returns a list
       else:
           return empty list'''
        path = path + [start]
        if start == end:
            return [path]
        if not graph.has_key(start):
            return []
        paths = []
        for node in graph[start]:
            if node not in path:
                newpaths = find_all_paths(graph, node, end, path)
                for newpath in newpaths:
                    paths.append(newpath)
        return paths

def find_shortest_path(graph, start, end, path=[]):
        '''to find list of all paths between a and b
           if  found:
               returns a list
           else:
               returns -1'''
        path = path + [start]
        if start == end:
            return path
        if not graph.has_key(start):
            return -1
        shortest = None
        for node in graph[start]:
            if node not in path:
                newpath = find_shortest_path(graph, node, end, path)
                if newpath:
                    if not shortest or len(newpath) < len(shortest):
                        shortest = newpath
        return shortest

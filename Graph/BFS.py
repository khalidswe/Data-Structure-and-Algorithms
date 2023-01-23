import collections

#BFS Algorithms
def BFS(graph,root):
    visited , queue = set(),collections.deque([root])
    visited.add(root)

    while queue:

        #deque a vertx from queue
        vertex = queue.popleft()
        print(str(vertex) + " ", end=" ")

        #enqueue
        for adjacent in graph[vertex]:
            if adjacent not in visited:
                visited.add(adjacent)
                queue.append(adjacent)

graph = {0: [1, 2, 3],
         1: [0,2], 
         2: [0,1,4],
         3: [0],
         4:[2]
         }
BFS(graph,0)
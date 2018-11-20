void listofdepths( Tree t, int V)	// Vertices to ibe visited
	{
		Node *listofnodes[V];
		bool *visitednodes[V];
		
		list <int> queue;
		for(i->size(V))
			visitednodes[i] = false;

		queue.enqueue(t.getChildren())

		int level = 0;

		while(queue is not empty)
			node = queue.dequeue();
			if !visited[node]
				visited[node] = true
				for i in node.getChildren()
					queue.enqueue(i);
					listofnodes[level].append(i)
	}

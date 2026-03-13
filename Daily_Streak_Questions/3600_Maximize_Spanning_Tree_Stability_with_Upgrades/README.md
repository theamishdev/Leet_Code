<h1>3600. Maximize Spanning Tree Stability with Upgrades</h1>

<p>
You are given a graph with <b>n</b> nodes and weighted edges.
Some edges may be upgraded to increase their stability.
</p>

<p>
Your goal is to construct a <b>spanning tree</b> such that the
minimum stability among its edges is maximized.
</p>

<p>
You may upgrade certain edges, but only a limited number of upgrades
are allowed.
</p>

<p>
Return the maximum possible stability of the spanning tree.
</p>

<hr>

<h2>Approach</h2>

<p>
The key observation is that the answer can be searched using
<b>Binary Search</b>.
</p>

<ul>
<li>Binary search the minimum stability value.</li>
<li>For each candidate value, check if a spanning tree can be formed.</li>
<li>Use <b>Disjoint Set Union (Union-Find)</b> to build the tree.</li>
<li>If edges below the threshold exist, we use upgrades if available.</li>
</ul>

<p>
If we can connect all nodes using ≤ allowed upgrades, the value is valid.
Otherwise it is not.
</p>

<hr>

<h2>Time Complexity</h2>

<p>O(E log W)</p>

<h2>Space Complexity</h2>

<p>O(N)</p>
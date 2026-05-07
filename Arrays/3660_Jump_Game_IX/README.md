<h1>3660. Jump Game IX</h1>

<p>
You are given an array where each position represents a possible jump condition.
Your goal is to determine the optimal way to reach the destination while satisfying
the movement constraints.
</p>

<hr>

<h2>Approach</h2>

<p>
We use a greedy / dynamic traversal strategy.
</p>

<ul>
<li>Track reachable states efficiently.</li>
<li>Update transitions based on valid jump conditions.</li>
<li>Avoid recalculating previously explored positions.</li>
</ul>

<p>
The idea is similar to maintaining the best reachable frontier while iterating.
</p>

<hr>

<h2>Time Complexity</h2>

<p>O(n)</p>

<h2>Space Complexity</h2>

<p>O(1) or O(n) depending on implementation.</p>
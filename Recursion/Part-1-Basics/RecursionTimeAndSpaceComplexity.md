Recursion – Time & Space Complexity
📘 Overview
Topic: Recursion – Time & Space Complexity

Language: C++

Concepts Covered: Recurrence relation, recursive tree, call stack analysis

🧠 Concept Explanation
Recursion: A function calling itself until a base case is reached.

Time Complexity (TC): Total number of recursive calls × work done in each call.

Space Complexity (SC): Depth of recursion tree × memory used per call (stack frame).

⏱ Time Complexity Analysis
Example: Factorial Function
cpp
int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}
Recurrence Relation:  
𝑇
(
𝑛
)
=
𝑇
(
𝑛
−
1
)
+
𝑂
(
1
)
 
Total Calls: 
𝑛
+
1
 (from n down to 0)

Work per Call: Constant (multiplication + function overhead)

Final Time Complexity: O(n)

💾 Space Complexity Analysis
Each recursive call creates a stack frame.

Maximum depth of recursion = 
𝑛
.

Memory per call = constant.

Space Complexity: O(n)

🌳 Recursive Tree Visualization
Factorial(4) example:

Code
factorial(4)
   → 4 * factorial(3)
        → 3 * factorial(2)
             → 2 * factorial(1)
                  → 1 * factorial(0)
                       → returns 1
Backtracking phase: results bubble up → 1 → 2 → 6 → 24 → 120.

📝 Key Takeaways
Recursion complexity = number of calls × work per call.

Factorial recursion → Time: O(n), Space: O(n).

Always check both recursion depth and work per call.

Backtracking = returning phase where stack frames are removed one by one.

✅ Practice Problems
Find factorial using recursion (done).

Print numbers from n to 1 using recursion.

Fibonacci sequence using recursion (analyze O(2^n) time, O(n) space).

Subset generation using recursion + backtracking.
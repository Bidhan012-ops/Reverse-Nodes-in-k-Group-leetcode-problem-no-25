# Reverse Nodes in K-Group (Unique Recursive Approach)

## 🧩 Problem

Given a linked list, reverse the nodes of a linked list *k* at a time and return its modified list.

You may not alter the values in the list’s nodes, only nodes themselves may be changed.

**LeetCode Problem:** [25. Reverse Nodes in k-Group](https://leetcode.com/problems/reverse-nodes-in-k-group/)

---

## 💡 My Unique Approach

Unlike most standard solutions (which are either iterative or use dual recursion returns), this approach introduces a **controlled recursion with in-place linking logic**.

I didn’t take any help from tutorials, AI, or existing solutions.
This algorithm was designed purely from **dry runs, logical reasoning, and analyzing test cases**.

### 🚀 Key Idea

* Use recursion to reverse exactly *k* nodes at a time.
* Pass a counter (`count`) to control when recursion should stop.
* Inside recursion, adjust the `next` pointers directly — no need for dummy nodes or external linking functions.
* Handle the connection of each reversed block within the main loop iteratively.

This combination of **recursive reversal + iterative connection** is rarely seen and was developed during experimentation.

---

## ⚙️ Complexity Analysis

| Type      | Complexity                                             |
| --------- | ------------------------------------------------------ |
| **Time**  | O(n) – Each node is visited a constant number of times |
| **Space** | O(1) auxiliary (O(k) if recursion stack is counted)    |

---

## 🧠 Intuition Behind the Logic

1. Recur until you reach *k* nodes or the end.
2. On unwind, reverse pointers locally (`front->next = head`).
3. Return the new head of the reversed block.
4. In the main function, attach each reversed block in sequence.

This recursive process naturally maintains order without requiring manual stack or extra memory.

---



## 🧩 Why It’s Special

* No external helper functions for sublist reversal.
* Avoids dummy nodes and extra data structures.
* Combines recursion and iteration cleanly.
* Passes all edge cases and beats 100% runtime.

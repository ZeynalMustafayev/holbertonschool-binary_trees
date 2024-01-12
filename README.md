Binary Trees Project
Project Authors
Ilaha Heybatova
Zeynal Mustafayev

Description
This project explores fundamental concepts related to binary trees in C programming. The primary focus includes understanding binary trees, distinguishing them from Binary Search Trees (BSTs), analyzing time complexity gains compared to linked lists, and exploring various properties like depth, height, size, traversal methods, and tree balance.

Requirements
Files containing big O notations will use this format:

O(1)
O(n)
O(n!)
n*m -> O(nm)
n squared -> O(n^2)
sqrt n -> O(sqrt(n))
log(n) -> O(log(n))
n * log(n) -> O(nlog(n))
Provided Files
Definitions of binary_tree_t, bst_t, avl_t, and heap_t for binary_trees.h
binary_tree_print.c
0-main.c through 18-main.c
Mandatory Tasks
✅ 0. New Node
Write a function that creates a binary tree node.

Prototype: binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
Where parent is a pointer to the parent node of the node to create, and value is the value to put in the new node.
When created, a node does not have any child.
Your function must return a pointer to the new node, or NULL on failure.
File(s): 0-binary_tree_node.c
Compiled: gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 0-main.c 0-binary_tree_node.c -o 0-node

✅ 1. Insert Left
Write a function that inserts a node as the left-child of another node.

Prototype: binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
Where parent is a pointer to the node to insert the left-child in, and value is the value to store in the new node.
Your function must return a pointer to the created node, or NULL on failure or if parent is NULL.
If parent already has a left-child, the new node must take its place, and the old left-child must be set as the left-child of the new node.
File(s): 1-binary_tree_insert_left.c
Compiled: gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 1-main.c 1-binary_tree_insert_left.c 0-binary_tree_node.c -o 1-left

✅ 2. Insert Right
Write a function that inserts a node as the right-child of another node.

Prototype: binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
Where parent is a pointer to the node to insert the right-child in, and value is the value to store in the new node.
Your function must return a pointer to the created node, or NULL on failure or if parent is NULL.
If parent already has a right-child, the new node must take its place, and the old right-child must be set as the right-child of the new node.
File(s): 2-binary_tree_insert_right.c
Compiled: gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 2-main.c 2-binary_tree_insert_right.c 0-binary_tree_node.c -o 2-right

✅ 3. Delete
Write a function that deletes an entire binary tree.

Prototype: void binary_tree_delete(binary_tree_t *tree);
Where tree is a pointer to the root node of the tree to delete.
If tree is NULL, do nothing.
File(s): 3-binary_tree_delete.c
Compiled: gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 3-main.c 3-binary_tree_delete.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 3-del

✅ 4. Is Leaf
Write a function that checks if a node is a leaf.

Prototype: int binary_tree_is_leaf(const binary_tree_t *node);
Where node is a pointer to the node to check.
Your function must return 1 if node is a leaf, otherwise 0.
If node is NULL, return 0.
File(s): 4-binary_tree_is_leaf.c
Compiled: gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 4-binary_tree_is_leaf.c 4-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 4-leaf

✅ 5. Is Root
Write a function that checks if a given node is a root.

Prototype: int binary_tree_is_root(const binary_tree_t *node);
Where node is a pointer to the node to check.
Your function must return 1 if node is a root, otherwise 0.
If node is NULL, return 0.
File(s): 5-binary_tree_is_root.c
Compiled: gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 5-binary_tree_is_root.c 5-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 5-root

✅ 6. Pre-order Traversal
Write a function that goes through a binary tree using pre-order traversal.

Prototype: void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
Where tree is a pointer to the root node of the tree to traverse, and func is a pointer to a function to call for each node.
The value in the node must be passed as a parameter to this function.
If tree or func is NULL, do nothing.
File(s): 6-binary_tree_preorder.c
Compiled: gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 6-main.c 6-binary_tree_preorder.c 0-binary_tree_node.c -o 6-pre

✅ 7. In-order Traversal
Write a function that goes through a binary tree using in-order traversal.

Prototype: void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
Where tree is a pointer to the root node of the tree to traverse, and func is a pointer to a function to call for each node.
The value in the node must be passed as a parameter to this function.
If tree or func is NULL, do nothing.
File(s): 7-binary_tree_inorder.c
Compiled: gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 7-main.c 7-binary_tree_inorder.c 0-binary_tree_node.c -o 7-in

✅ 8. Post-order Traversal
Write a function that goes through a binary tree using post-order traversal.

Prototype: void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
Where tree is a pointer to the root node of the tree to traverse, and func is a pointer to a function to call for each node.
The value in the node must be passed as a parameter to this function.
If tree or func is NULL, do nothing.
File(s): 8-binary_tree_postorder.c
Compiled: gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 8-main.c 8-binary_tree_postorder.c 0-binary_tree_node.c -o 8-post

✅ 9. Height
Write a function that measures the height of a binary tree.

Prototype: size_t binary_tree_height(const binary_tree_t *tree);
Where tree is a pointer to the root node of the tree to measure the height.
If tree is NULL, your function must return 0.
File(s): 9-binary_tree_height.c
Compiled: gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 9-binary_tree_height.c 9-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 9-height

✅ 10. Depth
Write a function that measures the depth of a node in a binary tree.

Prototype: size_t binary_tree_depth(const binary_tree_t *tree);
Where tree is a pointer to the node to measure the depth.
If tree is NULL, your function must return 0.
File(s): 10-binary_tree_depth.c
Compiled: gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 10-binary_tree_depth.c 10-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 10-depth

✅ 11. Size
Write a function that measures the size of a binary tree.

Prototype: size_t binary_tree_size(const binary_tree_t *tree);
Where tree is a pointer to the root node of the tree to measure the size.
If tree is NULL, the function must return 0.
File(s): 11-binary_tree_size.c
Compiled: gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 11-binary_tree_size.c 11-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 11-size

✅ 12. Leaves
Write a function that counts the leaves in a binary tree.

Prototype: size_t binary_tree_leaves(const binary_tree_t *tree);
Where tree is a pointer to the root node of the tree to count the number of leaves.
If tree is NULL, the function must return 0.
A NULL pointer is not a leaf.
File(s): 12-binary_tree_leaves.c
Compiled: gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 12-binary_tree_leaves.c 12-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 12-leaves

✅ 13. Nodes
Write a function that counts the nodes with at least 1 child in a binary tree.

Prototype: size_t binary_tree_nodes(const binary_tree_t *tree);
Where tree is a pointer to the root node of the tree to count the number of nodes.
If tree is NULL, the function must return 0.
A NULL pointer is not a node.
File(s): 13-binary_tree_nodes.c
Compiled: gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 13-binary_tree_nodes.c 13-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 13-nodes

✅ 14. Balance Factor
Write a function that measures the balance factor of a binary tree.

Prototype: int binary_tree_balance(const binary_tree_t *tree);
Where tree is a pointer to the root node of the tree to measure the balance factor.
If tree is NULL, return 0.
File(s): 14-binary_tree_balance.c
Compiled: gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 14-binary_tree_balance.c 14-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c 1-binary_tree_insert_left.c -o 14-balance

✅ 15. Is Full
Write a function that checks if a binary tree is full.

Prototype: int binary_tree_is_full(const binary_tree_t *tree);
Where tree is a pointer to the root node of the tree to check.
If tree is NULL, your function must return 0.
File(s): 15-binary_tree_is_full.c
Compiled: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 15-binary_tree_is_full.c 15-main.c 0-binary_tree_node
✅ 16. Is perfect
Write a function that checks if a binary tree is perfect.

Prototype: int binary_tree_is_perfect(const binary_tree_t *tree);
Where tree is a pointer to the root node of the tree to check.
If tree is NULL, your function must return 0.
File(s): 16-binary_tree_is_perfect.c
Compiled: gcc -Wall -Wextra -Werror -pedantic binary_tree_is perfect.c 16-binary_tree_is_perfect.c 16-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 16-perfect
✅17. Sibling
Write a function that finds the sibling of a node

Prototype: binary_tree_t *binary_tree_sibling(binary_tree_t *node);
Where node is a pointer to the node to find the sibling
Your function must return a pointer to the sibling node
If node is NULL or the parent is NULL, return NULL
If node has no sibling, return NULL
File(s): 17-binary_tree_sibling.c
Compiled: gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 17-main.c 17-binary_tree_sibling.c 0-binary_tree_node.c -o 17-sibling
✅18. Uncle
Write a function that finds the uncle of a node

Prototype: binary_tree_t *binary_tree_uncle(binary_tree_t *node);
Where node is a pointer to the node to find the uncle
Your function must return a pointer to the uncle node
If node is NULL, return NULL
If node has no uncle, return NULL
File(s): 18-binary_tree_uncle.c
Compiled: gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 18-main.c 18-binary_tree_uncle.c 0-binary_tree_node.c -o 18-uncle
Student
Ilaha Heybatova - [ilaahe04](github.com/ilaahe04)
Zeynal Mustafayev- [ZeynalMustafayev](github.com/ZeynalMustafayev)

                           .----------------------(006)-------.
                      .--(001)-------.                   .--(008)--.
                 .--(-02)       .--(003)-------.       (007)     (009)
       .-------(-06)          (002)       .--(005)
  .--(-08)--.                           (004)
(-09)     (-07)

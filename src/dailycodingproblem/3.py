'''
Given the root to a binary tree, implement serialize(root), which serializes the tree into a string, and deserialize(s), which deserializes the string back into the tree.

For example, given the following Node class

class Node:
    def __init__(self, val, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
The following test should pass:

node = Node('root', Node('left', Node('left.left')), Node('right'))
assert deserialize(serialize(node)).left.left.val == 'left.left'
'''
import json

class Node:
    def __init__(self, val, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

def serialize(node: Node) -> str:
    if node is None:
        return None

    return json.dumps(dict(
        val=node.val,
        left=serialize(node.left),
        right=serialize(node.right),
    ))

def deserialize(serialized_node: str) -> Node:
    if  serialized_node is None:
        return None

    parsed = json.loads(serialized_node)
    return Node(
        parsed['val'],
        deserialize(parsed['left']),
        deserialize(parsed['right']),
    )

node = Node('root', Node('left', Node('left.left')), Node('right'))
assert deserialize(serialize(node)).left.left.val == 'left.left'

class Node:
    def __init__(self, data) -> None:
        self.data = data
        self.left = None
        self.rigght = None

class Arvore:
    def __init__(self) -> None:
        self.root = None

    def insere(self, data):
        if self.root is None:
            self.root = Node(data)
        else:
            self.insere_recursao(data, self.root)

    def insere_recursao(self, data, node):
        if data < node.data:
            if node.left is None:
                node.left = Node(data)
            else:
                self.insere_recursao(data, node.left)
        else:
            if node.right is None:
                node.right = Node(data)
            else:
                self.insere_recursao(data, node.right)

    def busca_arvore(self, data):
        return self.busca_recursiva(self.root, data)

    def busca_recursiva(self, node, data):
        if node is None:
            return False
        if node.data == data:
            return True
        elif data < node.data:
            return self.busca_recursiva(node.left, data)
        else:
            return self.busca_recursiva(node.right, data)

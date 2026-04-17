class Node:
    def __init__(self, value):
        self.value = value
        self.next = None
        self.previus = None

class DoubleLinkedList:
    def __init__(self) -> None:
        self.head = None
        self.tail = None

    def adicionar_inicio(self, value):
        novo_node = Node(value)
        novo_node.next = self.head

        if self.head:
            self.head.previus = novo_node
        else:
            self.tail = novo_node

    def adicionar_fim(self, value):
        novo_node = Node(value)
        novo_node.previus = self.tail

        if self.tail:
            self.tail.next = novo_node
        else:
            self.head = novo_node

    def remover_inicio(self):
        if not self.head:
            return None

        valor_removido_inicio = self.head.value
        self.head = self.head.next

        if self.head:
            self.head.prev = None
        else:
            self.tail = None

        return valor_removido_inicio

    def revomer_final(self):
        if not self.tail:
            return None

        valor_removido_final = self.tail.value
        self.tail = self.tail.previus

        if self.tail:
            self.tail.next = None
        else:
            self.head = None

        return valor_removido_final

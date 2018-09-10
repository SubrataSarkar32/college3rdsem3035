class Node:

    def __init__(self, data, left = None, right = None, height = 0):
        self.data = data
        self.left = left
        self.right = right
        self.height = height

    def add_node(self, data):
        if self.data > data:
            '''Adding to left subtree'''
            if self.left is None:
                self.left = Node(data)
            else:
                self.left.add_node(data)
                if ( self.get_left_height() - self.get_right_height() == 2):
                    ''' Then we need to balance a subtree'''
                    print("Rebalancing after inserting", data)
                    if (data < self.left.data):
                        self.rotate_left()
                    else:
                        self.double_rotate_left()

        else:
            '''Adding to right subtree'''
            if self.right is None:
                self.right = Node(data)
            else:
                self.right.add_node(data)
                if ( self.get_right_height() - self.get_left_height() == 2):
                    ''' Then we need to balance a subtree'''
                    print("Rebalancing after inserting", data)
                    if (data < self.right.data):
                        self.rotate_right()
                    else:
                        self.double_rotate_right()

    def print_nodes(self):
        if self.left is not None:
            self.left.print_nodes()
        print(self);
        if self.right is not None:
            self.right.print_nodes()


    '''
    AVL methods
    '''
    def get_right_height(self):
        if self.right is None:
            return -1
        else:
            return self.right.height

    def get_left_height(self):
        if self.left is None:
            return -1
        else:
            return self.left.height

    def set_height(self):
        self.get_height = max( self.left.get_height, self.right.get_height ) + 1

    def rotate_right(self):
        print("rotating right",self.data);
        temp = self
        self = self.right
        self.right = temp
        self.right.set_height
        self.set_height

    def rotate_left(self):
        print("rotating left",self.data);
        temp = self
        self = self.left
        self.left = temp
        self.left.set_height()
        self.set_height()

    def double_rotate_right(self):
        print("double rotating right",self.data);
        temp = self.left
        self.left = temp.right
        temp.right = self
        self = temp
        self.right.set_height
        self.set_height

    def double_rotate_left(self):
        print("double rotating left",self.data);
        temp = self.right
        self.right = temp.left
        temp.left = self
        self = temp
        self.left.set_height
        self.set_height

    def __str__(self):
        return str(self.data)

class binary_tree:

    def __init__(self):
        self.root = None

    def getRoot(self):
        return self.root

    def add(self, data):
        if self.root is None:
            self.root = Node(data)
        else:
            self.root.add_node(data)

    def print_all(self):
        if self.root is None:
            print("Empty tree")
        else:
            self.root.print_nodes();


if __name__ == '__main__':
    b = binary_tree();
    b.add(1)
    b.add(2)
    b.add(4)
    b.add(6)
    b.add(3)
    b.add(5)
    b.print_all()

#include "tree.h"

int main()
{
    int x[9] = {5,3,9,10,4,7,1,8,6};
    adrNode root = NULL;
    cout << "============================================" <<endl;
    for(int i = 0; i < 9; i++){
        cout << x[i] << " ";
        insertNode(root, newNode(x[i]));
    }
    cout << "\n\nPre Order\t\t: ";
    printPreOrder(root);
    cout << "\n\nDescendant of Node 9\t: ";
    printDescendant(root, 9);
    cout << "\n\nSum of BST Info\t\t: " << sumNode(root) <<endl;
    cout << "Number of Leaves\t: " << countLeaves(root) <<endl;
    cout << "Height of Tree\t\t: " << heightTree(root) <<endl;
    cout << "============================================" <<endl;
}

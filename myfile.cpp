#include <iostream>
#include <cstddef>

using namespace std;	

class Node{
	public:
		int data;
		Node *left;
		Node *right;
		Node(int d){
			data = d;
			left = NULL;
			right = NULL;
		}
};
class Solution{
	public:
		Node* insert(Node* root, int data) {
			if(root == NULL) {
				return new Node(data);
			}
			else {
				Node* cur;
				if(data <= root->data){
					cur = insert(root->left, data);
					root->left = cur;
				}
				else{
					cur = insert(root->right, data);
					root->right = cur;
				}

				return root;
			}
		}

		int getHeight(Node* root){
			//Write your code here
			int left_length=0, right_length=0;
			if(root->left ==NULL && root->right==NULL)
				return 0;
			if(root-> right != NULL)
			{
			//	Solution left_recursive;
				right_length = this->getHeight(root->right)+1;
				
			}			
			if(root->left != NULL)
				left_length = this->getHeight(root->left)+1;
			return (right_length>left_length)?right_length:left_length;	
		}

}; //End of Solution

int main() {
	Solution myTree;
	Node* root = NULL;
	int t;
	int data;

	cin >> t;

	while(t-- > 0){
		cin >> data;
		root = myTree.insert(root, data);
	}
	int height = myTree.getHeight(root);
	cout << height;

	return 0;
}





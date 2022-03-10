#include <iostream>
#include <cstddef>
#include <queue>
#include <string>
#include <cstdlib>

using namespace std;	
class Node{
	public:
		int data;
		Node *left,*right;
		Node(int d){
			data=d;
			left=right=NULL;
		}
};
class Solution{
	public:
		Node* insert(Node* root, int data){
			if(root==NULL){
				return new Node(data);
			}
			else{
				Node* cur;
				if(data<=root->data){
					cur=insert(root->left,data);
					root->left=cur;
				}
				else{
					cur=insert(root->right,data);
					root->right=cur;
				}           
				return root;
			}
		}

		void levelOrder(Node * root){
			//Write your code here<F2>
			queue<Node *> my_queue;
			my_queue.push(root);
			while(!my_queue.empty()){	
				Node * cur = my_queue.front();
				my_queue.pop();
				if(cur->left != NULL)
				{
					my_queue.push(cur->left);
				}
				if(cur->right != NULL)
				{
					my_queue.push(cur->right);
				}
				cout << cur-> data << " ";
			}
			cout << endl;

		}

};//End of Solution
int main(){
	Solution myTree;
	Node* root=NULL;
	int T,data;
	cin>>T;
	while(T-->0){
		cin>>data;
		root= myTree.insert(root,data);
	}
	myTree.levelOrder(root);
	return 0;
}

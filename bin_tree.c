

typedef struct node{
	int value;
	struct node *left;
	struct node *right;
}node;

node *root = 0;

insert(int k, node **leaf){
	if(*leaf == 0){
		*leaf = (node*)malloc(sizeof(node));
		(*leaf)->key = k;
		(*leaf)->left = 0;
		(*leaf)->right = 0;
	}
	else if(k < (*leaf)->key){
		insert(k, &(*leaf)->left);
	}
	else if(k > (*leaf)->key){
		insert(k, &(*leaf)->right);
	}
}

node *contains(int k, node *leaf){
	if(leaf!=0){
		if(k == leaf->key)
			return leaf;
		else if(k<leaf->key)
			return contains(k, leaf->left);
		else if(k>leaf->key)
			return contains(k, leaf->right);
	}
	else return 0;
}

/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    void traversal(Node* node,unordered_map<int,vector<int>> &mp){

        int n = node->neighbors.size();
        int v = node->val;

        if (mp.find(v) == mp.end()){
            for(int i=0;i<n;i++){
                int temp = node->neighbors[i];
                mp[v].push_back(temp->val);
                traversal(temp,mp);
            }
        }

        else{
            return;
        }
    }

    void builGraph(Node* node,unordered_map<int,int> mp){

    }


    Node* cloneGraph(Node* node) {
        unordered_map<int,vector<int>> mp;

        traversal(node,mp);

        Node* new_node = new Node();
        new_node->val = 1;

        buildGraph(new_node, mp);

        return new_node;

    }
};









Node* cloneGraph(Node* node) {
    map<Node*, Node*> m; 
    queue<Node*> q; 
  
    q.push(node); 
    Node *node; 
  
    
    node = new Node(); 
    node->val = node->val; 
  
     
    m[node] = node; 
    while (!q.empty()) 
    { 
        Node *u = q.front(); 
        q.pop(); 
        vector<Node *> v = u->neighbours; 
        int n = v.size(); 
        for (int i = 0; i < n; i++) 
        {  
            if (m[v[i]] == NULL) 
            { 
                node = new Node(); 
                node->val = v[i]->val; 
                m[v[i]] = node; 
                q.push(v[i]); 
            } 
  
            m[u]->neighbours.push_back(m[v[i]]); 
        } 
    } 
  
    return m[node];

    }

    
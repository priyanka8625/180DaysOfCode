class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(), deck.end()); // Sort the deck in increasing order
        
        int n = deck.size();
        vector<int> result(n);
        queue<int> indices;//to store the indices and add elements to the right index in result
        
        for (int i = 0; i < n; i++) {
            indices.push(i); // Initialize queue with indices 0, 1, 2, ..., n-1
        }
        
        for (int card : deck) {
            int idx = indices.front(); // Get the next available index
            indices.pop(); // Remove the index from the front
            result[idx] = card; // Place the card in the result array
            if (!indices.empty()) {
                indices.push(indices.front()); // Move the used index to the end of deque
                indices.pop(); // Remove the index from the front
            }
        }
        
        return result;
    }
};
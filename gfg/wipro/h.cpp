unordered_map<string, int> voteCount;
        
// Count votes for each candidate
for (int i = 0; i < n; i++) {
    voteCount[arr[i]]++;
}

int maxVotes = 0;
string winner;

// Determine the winner
for (auto &entry : voteCount) {
    if (entry.second > maxVotes || (entry.second == maxVotes && entry.first < winner)) {
        maxVotes = entry.second;
        winner = entry.first;
    }
}

return {winner, to_string(maxVotes)};

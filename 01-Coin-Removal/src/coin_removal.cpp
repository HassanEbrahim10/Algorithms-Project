#include <iostream>
#include <vector>
using namespace std;

// → Greedy Algorithm:
//     • Look at the available choices.
//     • Select the best choice according to a specific rule.
//     • Perform the operation.
//     • Update the current state.
//     • Repeat until reaching the goal.

// → Coin removal:
// • Remove a coin that is currently H.
// • Flip its remaining original neighbors.

// ALOGRITHM: removeCoins(Coins[0....n-1], n)
// Input : Number of coins n and their initial states
// Output: Whether all coins can be removed and the removal sequence

struct Result {
    bool possible;
    vector<int> sequence;
};


Result removeCoins(int n, char coins[]){
    Result result;
    vector<int> Headers;
    for(int i = 0; i < n ; i++){
        if(coins[i]=='H')
            Headers.push_back(i);
    }

    int check = 0;

    for(int i = 0; i < n; i++)
    {   
        if (Headers.empty()) break;

        else {
            int leftmost_index = Headers[0];

            result.sequence.push_back(leftmost_index);
            Headers.erase(Headers.begin());

            if(leftmost_index = 0)
            {
                coins[leftmost_index] = '0';
                check++;
                if(coins[leftmost_index + 1] == 'T')
                {
                    coins[leftmost_index + 1] = 'H';
                    Headers.insert(Headers.begin(), leftmost_index - 1);
                }
                else if(coins[leftmost_index + 1] == 'H')
                {
                    coins[leftmost_index + 1] = 'T';
                    Headers.erase(Headers.begin());
                }
            }

            else if(leftmost_index > 0)
            {
                coins[leftmost_index] = '0';
                check++;
                if(coins[leftmost_index + 1] == 'T')
                {
                    coins[leftmost_index + 1] = 'H';
                    Headers.insert(Headers.begin(), leftmost_index - 1);
                }
                else if(coins[leftmost_index + 1] == 'H')
                {
                    coins[leftmost_index + 1] = 'T';
                    Headers.erase(Headers.begin());
                }
                if(coins[leftmost_index - 1] == 'T')
                {
                    coins[leftmost_index - 1] = 'H';
                    Headers.insert(Headers.begin(), leftmost_index - 1);
                }
            }
        }
    }
    if(check == n) 
    {
        result.possible = true; 
        return result;
    }
    else
    {
        result.possible = false;
        result.sequence.clear();
        return result;
    }
}

int main() {

    return 0;
}

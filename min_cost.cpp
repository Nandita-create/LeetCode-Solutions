#include <iostream>
using namespace std;

class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        
        long long min_cost;
        long long cost_1, cost_2;
        long long remaining;
        if (need1<need2)
        {
            min_cost = min(costBoth, cost1+cost2);
            cost_1 = 1LL*need1*min_cost;
            remaining = min((1LL*(need2-need1)*costBoth), (1LL*(need2-need1)*cost2));
            cost_1 = cost_1+remaining;
        }

        else
        {
            min_cost = min(costBoth, cost1+cost2);
            cost_1 = 1LL*need2*min_cost;
            remaining = min((1LL*(need1-need2)*costBoth), (1LL*(need1-need2)*cost1));
            cost_1 = cost_1+remaining;
        }

        if (costBoth<cost1 && costBoth<cost2)
        {
            if (need1>need2)
            cost_2 = 1LL*costBoth*need1;

            else
            cost_2 = 1LL*costBoth*need2;
        }

        else
        cost_2 = (1LL*cost1*need1)+(1LL*cost2*need2);

        long long result = min(cost_1, cost_2);

        return result;
    }
};

int main() {
	int cost1, cost2, costBoth, need1, need2;
    cout<<"Enter cost1, cost2, costBoth, need1 and need2: ";
	cin>>cost1;
	cin>>cost2;
	cin>>costBoth;
	cin>>need1;
	cin>>need2;
	
	Solution min;
	long long results = min.minimumCost(cost1, cost2, costBoth, need1, need2);
	
	cout<<"Results: "<<results<<endl;
	
	return 0;
}
#include <iostream>
#include <cstdlib>
#include <cstdlib>
#include "loadBalancer.h"

use namespace std;

int main() {
    int servers;
    int load_balancer_time;
    srand(static_casr<unsigned>(time(0)));

    cout << "How many servers are there?: ";
    cin >> servers;
    cout << "How much time is needed for the load balancer: ";
    cin >> load_balancer_time;

    LoadBalancer loadBalancer(numServer);

    int requests = servers * 100;
    for (int i = 0; i < requests; i++) {
        loadBalancer.addRequest(Request(i+1));

        loadBalancer.distributeRequests();

        loadBalancer.processEachRequest();

        return 0;
    }
}
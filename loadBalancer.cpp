#include "loadBalancer.h"
#include <iostream>

LoadBalancer::LoadBalancer(int numServers) {
    for (int i = 0; i < numServers; ++i) {
        webServers.emplace_back(i + 1);
    }
}

void LoadBalancer::addRequest(const Request& request) {
    requestQueue.addRequest(request);
}

void LoadBalancer::distributeRequests() {
    int numServers = webServers.size();
    int serverIndex = 0;

    while (!requestQueue.isEmpty()) {
        Request req = requestQueue.getNextRequest();
        if (req.getId() != -1) {
            webServers[serverIndex].addRequest(req);
            serverIndex = (serverIndex + 1) % numServers;
        }
    }
}

void LoadBalancer::processEachRequest() {
    for (auto& server : webServers) {
        server.processRequests();
    }
}

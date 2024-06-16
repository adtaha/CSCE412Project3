#ifndef LOADBALANCER_H
#define LOADBALANCER_H

#include "webServer.h"
#include "requestQueue.h"
#include <vector>

class LoadBalancer {
public:
    LoadBalancer(int numServers);
    void addRequest(const Request& request);
    void distributeRequests();
    void processEachRequest();

private:
    std::vector<WebServer> webServers;
    RequestQueue requestQueue;
};

#endif

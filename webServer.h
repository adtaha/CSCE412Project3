#ifndef WEBSERVER_H
#define WEBSERVER_H

#include "request.h"
#include <queue>

class WebServer {
public:
    WebServer(int id);
    void addRequest(const Request& request);
    void processRequests();
    int getId() const;

private:
    int id;
    std::queue<Request> requestQueue;
};

#endif
